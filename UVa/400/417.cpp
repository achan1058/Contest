#include <bits/stdc++.h>
#include "header.h"

int main() {
	unordered_map<string, int> result;
	string s(1, ' ');
	int c = 1;

	for (s[0] = 'a'; s[0] <= 'z'; s[0]++) {
		result[s] = c;
		c++;
	}

	s.resize(2);
	for (s[0] = 'a'; s[0] <= 'z'; s[0]++) {
		for (s[1] = s[0] + 1; s[1] <= 'z'; s[1]++) {
			result[s] = c;
			c++;
		}
	}

	s.resize(3);
	for (s[0] = 'a'; s[0] <= 'z'; s[0]++) {
		for (s[1] = s[0] + 1; s[1] <= 'z'; s[1]++) {
			for (s[2] = s[1] + 1; s[2] <= 'z'; s[2]++) {
				result[s] = c;
				c++;
			}
		}
	}

	s.resize(4);
	for (s[0] = 'a'; s[0] <= 'z'; s[0]++) {
		for (s[1] = s[0] + 1; s[1] <= 'z'; s[1]++) {
			for (s[2] = s[1] + 1; s[2] <= 'z'; s[2]++) {
				for (s[3] = s[2] + 1; s[3] <= 'z'; s[3]++) {
					result[s] = c;
					c++;
				}
			}
		}
	}

	s.resize(5);
	for (s[0] = 'a'; s[0] <= 'z'; s[0]++) {
		for (s[1] = s[0] + 1; s[1] <= 'z'; s[1]++) {
			for (s[2] = s[1] + 1; s[2] <= 'z'; s[2]++) {
				for (s[3] = s[2] + 1; s[3] <= 'z'; s[3]++) {
					for (s[4] = s[3] + 1; s[4] <= 'z'; s[4]++) {
						result[s] = c;
						c++;
					}
				}
			}
		}
	}
	while (cin >> s)
		printf("%d\n", result[s]);
}
