#include <bits/stdc++.h>
#include "header.h"

int main() {
	int T, m, l, r;
	cin >> T;
	for (int X = 0; X < T; X++) {
		cin >> m;
		vector<pii> blocks, cover;
		while (cin >> l >> r && (l | r) != 0)
			blocks.push_back({ l, r });
		sort(blocks.begin(), blocks.end());
		int left = 0, numblock = 0;
		cover.pb({ -200000, -100000 });
		cover.pb({ -100000, 0 });
		for (auto& b : blocks) {
			if (b.x > cover.back().y) {
				cover.empty();
				break;
			}
			if (b.y > cover.back().y) {
				if (b.x <= cover[sz(cover) - 2].y)
					cover.back() = b;
				else
					cover.push_back(b);
			}
			if (cover.back().y >= m)
				break;
		}

		if (X > 0)
			printf("\n");
		if (sz(cover) == 0)
			printf("0\n");
		else {
			printf("%d\n", sz(cover) - 2);
			for (int i = 2; i < cover.size(); i++)
				printf("%d %d\n", cover[i].x, cover[i].y);
		}
	}
}
