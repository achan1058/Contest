#include <bits/stdc++.h>
#include "header.h"

int main() {
	int m, n;
	cin >> m >> n;
	printf("%s\n", min(m, n) % 2 == 1 ? "Akshat" : "Malvika");
}
