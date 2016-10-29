#include <bits/stdc++.h>
#include "segment_tree.h"

int main() {
	int n, v1, v2;
	string s;
	whileX(cin >> n && n != 0) {
		vi nums(n);
		read(nums);
		SegmentTree<int> tree(nums, true);
		printX("");
		printcn();
		while (cin >> s && s != "END") {
			cin >> v1 >> v2;
			if (s == "M")
				printf("%d\n", tree.query(v1 - 1, v2 - 1));
			else
				tree.update(v1 - 1, v2);
		}
	}
}
