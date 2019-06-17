#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	string s;
	vb used(26);
	bool good = true;
	cin >> n >> s;
	irep(c, s)
		used[toupper(c) - 'A'] = true;
	irep(b, used)
		good = good && b;
	print(good ? "YES" : "NO");
}
