#include <bits/stdc++.h>
#include "header.h"

string vars;
vb used(26);
vi in(26);
vvi graph;
string ans;
void backtrack() {
	if (sz(ans) == sz(vars)) {
		printf("%s\n", ans.c_str());
		return;
	}
	irep(c, vars) {
		int l = c - 'a';
		if (in[l] == 0 && !used[l]) {
			ans.pb(c);
			used[l] = true;
			irep(e, graph[l])
				in[e]--;

			backtrack();
			ans.pop_back();
			used[l] = false;
			irep(e, graph[l])
				in[e]++;
		}
	}
}

int main() {
	string s1, s2;
	char c1, c2;
	int X = 1;
	while (getline(cin, s1)) {
		getline(cin, s2);
		graph = vvi(26);
		in = vi(26);
		vars = "";
		if (X > 1)
			printf("\n");

		stringstream ss1(s1), ss2(s2);
		while (ss1 >> c1)
			vars.pb(c1);

		sort(all(vars));

		for (int i = 0; ss2 >> c1 >> c2; i += 2) {
			graph[c1 - 'a'].pb(c2 - 'a');
			in[c2 - 'a']++;
		}

		backtrack();
		X++;
	}
}
