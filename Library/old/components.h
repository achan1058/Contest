#pragma once
#include <bits/stdc++.h>
using namespace std;

// uses adjacency list
vvi stronglyConnectedBlocks(const vvi& graph) {
	pair<int, vi> comps = stronglyConnected(graph);
	vvi blocks(comps.x);
	rep(i, 0, sz(comps.y))
		blocks[comps.y[i]].pb(i);
	return blocks;
}
