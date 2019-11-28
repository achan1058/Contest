#include <bits/stdc++.h>
#include "header.h"

//total node, del node
pair<int, int> processTree(const vi& pred, const vvi& adjList, int V) {
	int numnodes = 1;
	vpii children;

	irep(v, adjList[V]) {
		if (v != pred[V]) {
			children.pb(processTree(pred, adjList, v));
			numnodes += children.back().first;
		}
	}

	if (sz(children) == 0) {
		return{ 1, 0 };
	} else if (sz(children) == 1) {
		return{ numnodes, numnodes - 1 };
	} else {
		int best = inf;
		rep(i, 0, sz(children)) {
			rep(j, i + 1, sz(children)) {
				best = min(best, numnodes - 1 - children[i].first - children[j].first + children[i].second + children[j].second);
			}
		}

		return{ numnodes, best };
	}
}

int main() {
	int N;
	forX() {
		cin >> N;
		vvi adjList(N);
		int v1, v2;
		rep(i, 0, N - 1) {
			cin >> v1 >> v2;
			adjList[v1 - 1].pb(v2 - 1);
			adjList[v2 - 1].pb(v1 - 1);
		}

		int best = inf;
		rep(V, 0, N) {
			vi pred(N, -1);
			queue<int> q;
			q.push(V);

			while (!q.empty()) {
				int v = q.front();
				q.pop();

				irep(x, adjList[v]) {
					if (x != V && pred[x] == -1) {
						pred[x] = v;
						q.push(x);
					}
				}
			}

			best = min(processTree(pred, adjList, V).second, best);
		}

		printp("%d\n", best);
	}
}