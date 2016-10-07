#include <bits/stdc++.h>
#include "util.h"

int main() {
	string s1, s2;
	Index<string> ind;
	vi parent;
	while (cin >> s1 >> s2 && s1 != "no.child") {
		int v1 = ind.getI(s1), v2 = ind.getI(s2);
		if (sz(parent) <= v1)
			parent.resize(v1 + 1, -1);
		parent[v1] = v2;
	}

	while (cin >> s1 >> s2) {
		vi v1 = { ind.getI(s1) }, v2 = { ind.getI(s2) };
		while (v1.back() < sz(parent) && v1.back() != -1)
			v1.push_back(parent[v1.back()]);
		while (v2.back() < sz(parent) && v2.back() != -1)
			v2.push_back(parent[v2.back()]);
		if (v1.back() != v2.back())
			printf("no relation\n");
		else {
			while (v1.size() > 0 && v2.size() > 0 && v1.back() == v2.back()) {
				v1.resize(v1.size() - 1);
				v2.resize(v2.size() - 1);
			}
			if (v1.empty()) {
				for (int i = 2; i < sz(v2); i++)
					printf("great ");
				if (v2.size() >= 2)
					printf("grand ");
				printf("parent\n");
			} else if (v2.empty()) {
				for (int i = 2; i < sz(v1); i++)
					printf("great ");
				if (v1.size() >= 2)
					printf("grand ");
				printf("child\n");
			} else if (v1.size() == 1 && v2.size() == 1)
				printf("sibling\n");
			else {
				printf("%d cousin", min(v1.size(), v2.size()) - 1);
				if (abs(sz(v1) - sz(v2)) > 0)
					printf(" removed %d\n", abs(sz(v1) - sz(v2)));
				else
					printf("\n");
			}
		}
	}
}
