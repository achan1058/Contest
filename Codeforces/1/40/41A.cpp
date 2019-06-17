#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	reverse(all(s2));
	print(s1 == s2 ? "YES" : "NO");
}
