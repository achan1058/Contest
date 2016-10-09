#include <bits/stdc++.h>
#include "topo_sort.h"

int main() {
	int ww, ss;
	vi w, s;
	while (cin >> ww >> ss) {
		w.pb(ww);
		s.pb(ss);
	}

	vvi graph(sz(w));
	rep(i, 0, sz(w)) {
		rep(j, 0, sz(w)) {
			if (w[i] < w[j] && s[i] > s[j])
				graph[i].pb(j);
		}
	}

	vi result = longestDAG(graph);
	printf("%d\n", sz(result));
	irep(v, result)
		printf("%d\n", v + 1);
}
