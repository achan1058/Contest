#pragma once
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
template <class T> using vvp = vector<vector<pair<int, T>>>;
template <class T> using vt = vector<tuple<int, int, T>>;
template <class T> inline void read(vector<T>& v, int b = 0, int e = 0) { for (int k = b; k < int(v.size()) - e; k++) cin >> v[k]; }
template <class T> inline void read(vector<vector<T>>& v) { for (auto& p : v) read(p); }

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
#define forX() int XT; string XS; cin >> XT; getline(cin, XS); for (int X = 1; X <= XT; X++)
#define whileX(a) int X = 0; while(X++, (a))
#define printX(...) printf("%s", (X > 1 ? "\n" : "")), printf(__VA_ARGS__)
#define printc(...) printf("Case %d: ", X), printf(__VA_ARGS__)
#define printp(...) printf("Case #%d: ", X), printf(__VA_ARGS__)
