#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m, v, X = 1;
	string s;
	while (cin >> n && n != 0) {
		map<int, int> mp;

		rep(i, 0, n) {
			cin >> m;
			rep(j, 0, m) {
				cin >> v;
				mp[v] = i;
			}
		}

		list<pair<int, queue<int>>> q;
		printf("Scenario #%d\n", X);
		while (cin >> s && s != "STOP") {
			if (s == "ENQUEUE") {
				bool found = false;
				cin >> v;
				fori(p, q) {
					if (p.x == mp[v]) {
						p.y.push(v);
						found = true;
						break;
					}
				}

				if (!found) {
					queue<int> nq;
					nq.push(v);
					q.push_back({ mp[v], nq });
				}
			} else {
				auto& p = q.front();
				printf("%d\n", p.y.front());
				p.y.pop();
				if (p.y.empty())
					q.pop_front();
			}
		}
		printf("\n");
		X++;
	}
}
