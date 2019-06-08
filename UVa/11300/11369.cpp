#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, ans = 0;
		cin >> n;
		vi items(n);
		read(items);
		sort(all(items));
		for (int i = n - 3; i >= 0; i -= 3)
			ans += items[i];
		print(ans);
	}
}
