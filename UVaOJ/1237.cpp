#include <bits/stdc++.h>
#include "header.h"

int main() {
	int T, d, q, v;
	cin >> T;
	for (int X = 0; X < T; X++) {
		cin >> d;
		vs names(d);
		vector<pii> bounds(d);
		for (int i = 0; i < d; i++)
			cin >> names[i] >> bounds[i].x >> bounds[i].y;

		cin >> q;
		if (X > 0)
			printf("\n");
		for (int i = 0; i < q; i++) {
			int num = -1;
			cin >> v;
			for (int j = 0; j < d; j++) {
				if (bounds[j].x <= v && v <= bounds[j].y) {
					if (num == -1)
						num = j;
					else {
						num = -1;
						break;
					}
				}
			}

			if (num == -1)
				printf("UNDETERMINED\n");
			else
				printf("%s\n", names[num].c_str());
		}
	}
}
