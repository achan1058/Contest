#include <bits/stdc++.h>
#include "header.h"

int main() {
	int m, n;
	cin >> m >> n;
	print("%s", min(m, n) % 2 == 0 ? "Malvika" : "Akshat");
}
