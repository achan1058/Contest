#include <bits/stdc++.h>
#include "header.h"

map<ll, ll> spm, dpm;
ll same_path_color(ll n, ll K);

ll diff_path_color(ll n, ll K) {
	auto it = dpm.find(n);
	if (it != dpm.end())
		return it->second;
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else if (n % 2 == 0)
		return (same_path_color(n - 1, K) + diff_path_color(n - 1, K) * (K - 2)) % mod;
	ll sp = same_path_color(n / 2 + 1, K), dp = diff_path_color(n / 2 + 1, K);
	ll r1 = sp * dp % mod;
	ll r2 = dp * dp % mod;
	dpm[n] = (2 * r1 + r2 * (K - 2)) % mod;
	return (2 * r1 + r2 * (K - 2)) % mod;
}

ll same_path_color(ll n, ll K) {
	auto it = spm.find(n);
	if (it != spm.end())
		return it->second;
	if (n == 1)
		return 1;
	else if (n == 2)
		return 0;
	else if (n % 2 == 0)
		return diff_path_color(n - 1, K) * (K - 1) % mod;
	ll sp = same_path_color(n / 2 + 1, K), dp = diff_path_color(n / 2 + 1, K);
	ll r1 = sp * sp % mod;
	ll r2 = dp * dp % mod;
	spm[n] = (r1 + r2 * (K - 1)) % mod;
	return (r1 + r2 * (K - 1)) % mod;
}

class CycleColoring {
public:
	int countColorings(vector<int> vertexCount, vector<int> fromVertex, vector<int> toVertex, int K) {
		ll ci_1 = 1, ci_r = 0;

		rep(i, 1, sz(vertexCount)) {
			spm.clear();
			dpm.clear();
			int p1 = abs(fromVertex[i] - toVertex[i - 1]) + 1, p2 = vertexCount[i] - p1 + 2;
			ll ni_1 = same_path_color(p1, K) * same_path_color(p2, K) % mod;
			ll ni_r = diff_path_color(p1, K) * diff_path_color(p2, K) % mod;

			ll nci_11 = ci_1 * ni_1 % mod, nci_1r = ci_r * ni_r % mod;
			ll aa = ci_1 * ni_r % mod, bb = ci_r * ni_r % mod, cc = ci_r * ni_1 % mod;

			ci_1 = (nci_11 + nci_1r * (K - 1)) % mod;
			ci_r = (aa + cc + bb * (K - 2)) % mod;
		}

		int bk = toVertex.back();
		int p1 = abs(fromVertex[0] - bk) + 1, p2 = vertexCount[0] - p1 + 2;
		ll vi1 = same_path_color(p1, K) * same_path_color(p2, K) % mod;
		ll vir = diff_path_color(p1, K) * diff_path_color(p2, K) % mod;
		ll out = (vi1 * ci_1 + (vir * ci_r % mod) * (K - 1)) % mod;
		out = out * K % mod;
		return (int)(out);
	}
};
