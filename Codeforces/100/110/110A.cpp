#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	int num = 0;
	cin >> s;
	irep(c, s) {
		if (c == '4' || c == '7')
			num++;
	}
	print(num == 4 || num == 7 ? "YES" : "NO");
}
