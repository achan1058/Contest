#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	string s;
	cin >> n >> s;
	print(s.back() == 'F' && s[0] == 'S' ? "YES" : "NO");
}
