#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N;
	string s1, s2;
	while (cin >> N && N != -1) {
		getline(cin, s1);
		getline(cin, s1);
		getline(cin, s2);

		int wrong = 0, right = 0;
		vi todo(30);
		fori(v, s1) {
			if (v >= 'a' && v <= 'z') {
				if (todo[v - 'a'] == 0)
					right++;

				todo[v - 'a'] = 1;
			}
		}

		fori(v, s2) {
			if (v >= 'a' && v <= 'z') {
				if (todo[v - 'a'] == 0)
					wrong++;
				if (todo[v - 'a'] == 1)
					right--;

				todo[v - 'a'] = 2;
				if (wrong == 7)
					break;
				if (right == 0)
					break;
			}
		}

		printf("Round %d\n", N);
		if (wrong == 7)
			printf("You lose.\n");
		else if (right == 0)
			printf("You win.\n");
		else
			printf("You chickened out.\n");
	}
}
