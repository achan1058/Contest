#include <bits/stdc++.h>
#include "topo_sort.h"

int main() {
	int ww, ss;
	vi w, s;
	while (cin >> ww >> ss) {
		w.pb(ww);
		s.pb(ss);
	}

	AdjList<int> graph(sz(w));
	rep(i, 0, sz(w)) {
		rep(j, 0, sz(w)) {
			if (w[i] < w[j] && s[i] > s[j])
				graph.push(i, j);
		}
	}

	pair<int, vi> result = longestDAG(graph);
	printf("%d\n", result.x + 1);
	irep(v, result.y)
		printf("%d\n", v + 1);
}
