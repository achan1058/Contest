#include <bits/stdc++.h>
#include "header.h"

map<string, int> face = {
	{"Tetrahedron", 4},
	{"Cube", 6},
	{"Octahedron", 8},
	{"Dodecahedron", 12},
	{"Icosahedron", 20},
};

int main() {
	int n, ans = 0;
	string s;
	cin >> n;
	rep(i, 0, n) {
		cin >> s;
		ans += face[s];
	}
	print(ans);
}
