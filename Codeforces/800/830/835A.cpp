#include <bits/stdc++.h>
#include "header.h"

int main() {
	int s, v1, v2, t1, t2;
	cin >> s >> v1 >> v2 >> t1 >> t2;
	int a1 = 2 * t1 + s * v1;
	int a2 = 2 * t2 + s * v2;
	print(a1 < a2 ? "First" : a1 > a2 ? "Second" : "Friendship");
}
