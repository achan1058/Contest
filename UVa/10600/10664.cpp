#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	string s;
	forX() {
		getline(cin, s);
		stringstream ss(s);
		vi weight;
		vb arr(201);
		arr[0] = true;

		int total = 0;
		while (ss >> n) {
			weight.pb(n);
			total += n;
		}

		if (total % 2 == 1) {
			printf("NO\n");
			continue;
		}

		irep(v, weight) {
			rrep(i, 200, 0) {
				if (arr[i])
					arr[i + v] = true;
			}
		}

		printf("%s\n", arr[total / 2] ? "YES" : "NO");
	}
}
