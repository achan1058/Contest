#pragma once
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs; // unused
typedef pair<int, int> pii; // unused
typedef vector<vi> vvi;
typedef vector<ll> vl; // unused
typedef vector<bool> vb; // unused
typedef vector<double> vd; // unused
typedef vector<vd> vvd; // unused
typedef vector<vb> vvb; // unused
typedef vector<vs> vvs; // unused
typedef vector<vl> vvl; // unused
template <class T> using vvp = vector<vector<pair<int, T>>>; // unused
template <class T> using vt = vector<tuple<int, int, T>>; // unused
template <class T> inline void read(vector<T>& v, int b = 0, int e = 0) { for (int k = b; k < int(v.size()) - e; k++) cin >> v[k]; } // used default
template <class T> inline void read(vector<vector<T>>& v) { for (auto& p : v) read(p); } // unused

int inf = 0x3f3f3f3f; // unused
double eps = 1e-8; // unused
ll mod = 1000000007ll; // unused

#define rep(k, a, b) for (int k = (a); k < int(b); k++)
#define irep(k, a) for (auto& k : (a))
#define sz(a) int(a.size())
#define all(c) (c).begin(), (c).end() // unused
#define pb push_back // unused
#define x first // unused
#define y second // unused
#define mi(r, c, v) vvi(r, vi(c, v))
#define rrep(k, a, b) for (int k = (a); k >= int(b); k--) // unused
#define drep(i, j, a, b) for (int i = 0; i < (a); i++) for (int j = 0; j < (b); j++) // unused
#define md(r, c, v) vvd(r, vd(c, v)) // unused
#define mb(r, c, v) vvb(r, vb(c, v)) // unused
#define ms(r, c, v) vvs(r, vs(c, v)) // unused
#define ml(r, c, v) vvl(r, vl(c, v)) // unused
#define mc(r, c, v) vs(r, string(c, v)) // unused
#define add(i, j) ((i) + (j)) % mod // unused
#define mul(i, j) ((i) * (j)) % mod // unused
#define bits(n) int(__builtin_popcount(n)) // unused
#define gcd(a, b) abs(__gcd(a, b)) // unused
#define forX() int XT; string XS; cin >> XT; getline(cin, XS); for (int X = 1; X <= XT; X++)
#define lineX() string XE; if (X == 1) getline(cin, XE) // unused
#define whileX(a) int X = 0; while(X++, (a))
#define print(...) printf(__VA_ARGS__), printf("\n")
#define printX(...) printf("%s", (X > 1 ? "\n" : "")), printf(__VA_ARGS__) // unused
#define printc(...) printf("Case %d: ", X), printf(__VA_ARGS__), printf("\n")
#define printp(...) printf("Case #%d: ", X), printf(__VA_ARGS__), printf("\n") // unused
struct FastIO { FastIO() { cin.sync_with_stdio(0); cin.tie(0); } }; FastIO fio;
