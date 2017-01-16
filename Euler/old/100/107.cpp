#include <bits/stdc++.h>
#include "util.h"
#include "spanning_tree.h"

int main() {
	fstream in("Euler/input/107.txt");

	string s;
	EdgeList<int> graph(40);
	int weight = 0;

	rep(i, 0, 40) {
		in >> s;
		vs tokens = tokenizer(s, [](int c) {return c == ',' ? 1 : 0; });
		rep(j, i + 1, 40) {
			if (tokens[j] != "-") {
				graph.push(i, j, stoi(tokens[j]));
				weight += stoi(tokens[j]);
			}
		}
	}

	printf("%d\n", weight - get<0>(kruskal(graph)));
}
