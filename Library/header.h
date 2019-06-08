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
template<class T> inline istream& read(vector<T>& v) { for (auto& p : v) cin >> p; return cin; }
template<class T> inline istream& read(vector<vector<T>>& v) { for (auto& p : v) read(p); return cin; }

int inf = 0x3f3f3f3f;
double eps = 1e-8;
ll mod = 1000000007ll;
ll linf = 0x3f3f3f3f3f3f3f3f;

#define rep(k, a, b) for (int k = (a); k < int(b); k++)
#define irep(k, a) for (auto& k : (a))
#define sz(a) int(a.size())
#define all(c) (c).begin(), (c).end()
#define pb push_back
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
#define print(...) printf(__VA_ARGS__), printf("\n")
#define printd(d) printf("%d\n", d)
#define printl(l) printf("%lld\n", l)
#define prints(s) printf("%s\n", s.c_str())
#define printX(...) printf("%s", (X > 1 ? "\n" : "")), printf(__VA_ARGS__)
#define printc(...) printf("Case %d: ", X), printf(__VA_ARGS__), printf("\n")
#define printp(...) printf("Case #%d: ", X), printf(__VA_ARGS__), printf("\n")
#define printcn() printf("Case %d:\n", X)
struct FastIO { FastIO() { cin.sync_with_stdio(0); cin.tie(0); } }; FastIO fio;
