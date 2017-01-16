#include <bits/stdc++.h>
#include "header.h"

int main() {
	int ans = 0;
	string s;
	forX() {
		cin >> s;
		if (s == "++X" || s == "X++")
			ans++;
		else
			ans--;
	}
	printf("%d\n", ans);
}
