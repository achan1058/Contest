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
inline void printv() {}
inline void printv(const ll d) { printf("%lld", d); }
inline void printv(const char c) { printf("%c", c); }
inline void printv(const char s[]) { printf("%s", s); }
inline void printv(const string& s) { printf("%s", s.c_str()); }
template<class T> inline void printv(const T& d) { printf("%d", int(d)); }
template<class T, class... A> inline void printv(const T& t, const A& ... a) { printv(t); printf(" "); printv(a...); }
template<class T> inline void printv(const vector<T>& v, bool newline = false) {
	for (size_t i = 0; i < v.size(); i++) { printf(i == 0 ? "" : newline ? "\n" : " "); printv(v[i]); }
}
template<class... A> inline void print(const char f[], const A& ... a) { printf(f, a...); printf("\n"); }
template<class... A> inline void print(const A& ... a) { printv(a...); printf("\n"); }
template<class... A> inline void printXHelp(const A& ... a) { if (sizeof...(a)) print(a...); }
template<class... A> inline void printcHelp(const A& ... a) { if (sizeof...(a)) printf(" "); print(a...); }

int inf = 0x3f3f3f3f;
double eps = 1e-8;
ll mod = 1000000007ll;
ll binf = 0x3f3f3f3f3f3f3f3f;

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
#define printX(...) printf("%s", (X > 1 ? "\n" : "")), printXHelp(__VA_ARGS__)
#define printc(...) printf("Case %d:", X), printcHelp(__VA_ARGS__)
#define printp(...) printf("Case #%d:", X), printcHelp(__VA_ARGS__)
struct FastIO { FastIO() { cin.sync_with_stdio(0); cin.tie(0); } }; FastIO fio;
