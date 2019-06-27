#include <bits/stdc++.h>
#include "segment_tree.h"
#include "header.h"

int main() {
	int n, x, y;
	string s;
	whileX(cin >> n && n != 0) {
		vi pot(n);
		read(pot);
		SegmentTree<int> seg(pot, true);
		printX();
		printc();
		while (cin >> s && s != "END") {
			cin >> x >> y;
			if (s == "S")
				seg.update(x - 1, y);
			else
				print(seg.query(x - 1, y - 1));
		}
	}
}
