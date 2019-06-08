#include <bits/stdc++.h>
#include "header.h"

// n people, every k'th person is selected
// if n = 5 and k = 2, selects 1, 3, 0, 4 remain 2
vi joseph(int n, int k) {
	vi ans = { -1, 0 };
	for (int i = 2; i <= n; i++)
		ans.pb((ans.back() + k) % i);
	return ans;
}

int main() {
	vi ans = joseph(500000, 2);
	int n;
	while (cin >> n && n != 0)
		printd(ans[n - 1] + 2);
}
