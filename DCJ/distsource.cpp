#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<bool> vb;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<vb> vvb;
typedef vector<vs> vvs;
typedef vector<vl> vvl;

int inf = 0x3f3f3f3f;
double eps = 10e-8;
ll mod = 1000000007ll;

#define rep(k, a, b) for (int k = (a); k < int(b); k++)
#define sz(a) int(a.size())
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define x first
#define y second
#define mi(r, c, v) vvi(r, vi(c, v))
#define rrep(k, a, b) for (int k = (a); k >= int(b); k--)
#define fori(k, a) for (auto& k : (a))
#define md(r, c, v) vvd(r, vd(c, v))
#define mb(r, c, v) vvb(r, vb(c, v))
#define ms(r, c, v) vvs(r, vs(c, v))
#define ml(r, c, v) vvl(r, vl(c, v))
#define mc(r, c, v) vs(r, string(c, v))
#define add(i, j) ((i) + (j)) % mod
#define mul(i, j) ((i) * (j)) % mod
#define bits(n) int(__builtin_popcount(n))

// Compile command: dcj.py test --source 20XX/ABC.cpp --nodes 4

#include "message.h"
#include "gas_stations.h"

int main() {
	int nodes = NumberOfNodes(), my_id = MyNodeId(), N = GetNumKms(), tank = GetTankSize();
	int left = (N / nodes) * my_id, right = (N / nodes) * (my_id + 1);
	if (my_id == nodes - 1)
		right = N;

	if (my_id == 0) {
		ll total = 0;
		priority_queue<pii> q;
		for (int i = N - 1; i >= 0; i--) {
			if (i < N - tank) {
				ll gas = -q.top().x;
				int dist = q.top().y;
				while (dist - i > tank) {
					q.pop();
					gas = -q.top().x;
					dist = q.top().y;
				}
				total += gas;
				//cout << " " << total << endl;
			}

			ll v = GetGasPrice(i);
			while (!q.empty() && -q.top().x >= v)
				q.pop();
			q.push({ -v, i });
		}

		for (int i = tank - 1; i >= 0; i--) {
			ll gas = -q.top().x;
			int dist = q.top().y;
			while (dist > i) {
				q.pop();
				gas = -q.top().x;
				dist = q.top().y;
			}
			total += gas;
			//cout << total << endl;
		}
		printf("%lld\n", total);
	}

	return 0;
}
