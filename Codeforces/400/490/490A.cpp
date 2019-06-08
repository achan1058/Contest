#include <bits/stdc++.h>
#include "header.h"

int main() {
	vvi child(3);
	int v;
	forX() {
		cin >> v;
		child[v - 1].pb(X);
	}
	int n = min({ sz(child[0]), sz(child[1]), sz(child[2]) });
	print("%d", n);
	rep(i, 0, n)
		print("%d %d %d", child[0][i], child[1][i], child[2][i]);
}
