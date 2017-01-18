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
template <class T> using vp = vector<vector<pair<int, T>>>;
template <class T> using ep = vector<tuple<int, int, T>>;

int inf = 0x3f3f3f3f;
double eps = 1e-8;
ll mod = 1000000007ll;

#define rep(k, a, b) for (int k = (a); k < int(b); k++)
#define irep(k, a) for (auto& k : (a))
#define sz(a) int(a.size())
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define x first
#define y second
#define mi(r, c, v) vvi(r, vi(c, v))
#define rrep(k, a, b) for (int k = (a); k >= int(b); k--)
#define drep(i, j, a, b) for (int i = 0; i < (a); i++) for (int j = 0; j < (b); j++)
#define md(r, c, v) vvd(r, vd(c, v))
#define mb(r, c, v) vvb(r, vb(c, v))
#define ms(r, c, v) vvs(r, vs(c, v))
#define ml(r, c, v) vvl(r, vl(c, v))
#define mc(r, c, v) vs(r, string(c, v))
#define add(i, j) ((i) + (j)) % mod
#define mul(i, j) ((i) * (j)) % mod
#define bits(n) int(__builtin_popcount(n))
#define gcd(a, b) abs(__gcd(a, b))

// Compile command: dcj.py test --source 20XX/ABC.cpp --nodes 4

#include "message.h"
#include "again.h"

int main() {
	int nodes = NumberOfNodes(), my_id = MyNodeId(), N = GetN();
	ll tA = 0, tB = 0;
	for (int i = my_id; i < GetN(); i += nodes) {
		tA = add(tA, GetA(i));
		tB = add(tB, GetB(i));
	}
	PutLL(0, tA);
	PutLL(0, tB);
	Send(0);

	if (my_id == 0) {
		vl A(nodes), B(nodes);
		ll totalA = 0, totalB = 0;
		for (int i = 0; i < nodes; i++) {
			Receive(i);
			A[i] = GetLL(i);
			B[i] = GetLL(i);
			totalA = add(totalA, A[i]);
			totalB = add(totalB, B[i]);
		}

		ll ans = mul(totalA, totalB);
		ans = add(ans, mod - mul(A[0], B[0]));
		for (int i = 1; i < nodes; i++)
			ans = add(ans, mod - mul(A[i], B[nodes - i]));
		printf("%lld\n", ans);
	}
	return 0;
}
