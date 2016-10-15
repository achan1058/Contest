#include <bits/stdc++.h>
#include "util.h"

vs vars;
vb used(26);
vi in(26);
vvi graph;
string ans;
void backtrack() {
	if (sz(ans) == sz(vars)) {
		printf("%s\n", ans.c_str());
		return;
	}
	fori(c, vars) {
		int l = c[0] - 'a';
		if (in[l] == 0 && !used[l]) {
			ans.pb(c[0]);
			used[l] = true;
			fori(e, graph[l])
				in[e]--;

			backtrack();
			ans.pop_back();
			used[l] = false;
			fori(e, graph[l])
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
		vars = tokenizer(s1);
		if (X > 1)
			printf("\n");

		stringstream ss2(s2);
		sort(all(vars));

		for (int i = 0; ss2 >> c1 >> c2; i += 2) {
			graph[c1 - 'a'].pb(c2 - 'a');
			in[c2 - 'a']++;
		}

		backtrack();
		X++;
	}
}
