#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, ans = 0;
	string s;
	cin >> n >> s;
	irep(c, s)
		ans += c == '1' ? 1 : -1;
	print(abs(ans));
}
