#include <bits/stdc++.h>
#include "polygon.h"
#include "graham.h"

int main() {
	int n;
	whileX(cin >> n && n != 0) {
		vector<pti> pts(n);
		read(pts);
		int area = abs(Polygon<int>(pts).sa2());
		int hull = abs(Polygon<int>(graham(pts)).sa2());
		double ans = (1 - double(area) / hull) * 100;
		printf("Tile #%d\nWasted Space = %.2lf %%\n\n", X, ans);
	}
}
