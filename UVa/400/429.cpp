#include <bits/stdc++.h>
#include "utils.h"
#include "shortest_path.h"
#include "header.h"

int main() {
	forX() {
		string s;
		mapper<string> words;
		while (cin >> s && s != "*")
			words.map(s);
		int n = sz(words);
		vvi graph = mi(n, n, inf);
		drep(i, j, n, i) {
			string s1 = words.unmap(i), s2 = words.unmap(j);
			if (sz(s1) != sz(s2))
				continue;
			int diff = 0;
			rep(k, 0, sz(s1))
				diff += s1[k] == s2[k] ? 0 : 1;
			graph[i][j] = graph[j][i] = diff == 1 ? 1 : inf;
		}

		vvi dist = floyd(graph).first;
		getline(cin, s);
		printX();
		while (getline(cin, s) && s != "") {
			stringstream ss(s);
			string s1, s2;
			ss >> s1 >> s2;
			print(s1, s2, dist[words.map(s1)][words.map(s2)]);
		}
	}
}
