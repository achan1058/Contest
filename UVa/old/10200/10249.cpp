#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m, v;
	while (cin >> n >> m && (n | m) != 0) {
		vpii people(n), table(m);
		for (int i = 0; i < n; i++) {
			cin >> v;
			people[i] = { -v, i };
		}
		for (int i = 0; i < m; i++) {
			cin >> v;
			table[i] = { -v, i + 1 };
		}
		sort(all(people));
		vvi seating(n);
		bool good = true;
		for (int i = 0; i < n && good; i++) {
			sort(all(table));
			int num = -people[i].first, p = people[i].second;
			if (num > m) {
				good = false;
				break;
			}

			for (int j = 0; j < num; j++) {
				if (table[j].first == 0)
					good = false;
				
				table[j].first++;
				seating[p].push_back(table[j].second);
			}
		}

		if (!good) {
			printf("0\n");
			continue;
		}
		printf("1\n");
		for (int i = 0; i < n; i++) {
			sort(all(seating[i]));
			for (int j = 0; j < seating[i].size(); j++)
				printf("%d%c", seating[i][j], j == sz(seating[i]) - 1 ? '\n' : ' ');
		}
	}
}
