#include <bits/stdc++.h>
#include "header.h"

inline bool isVowel(char c) {
	return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

vi target = { 5, 7, 5 };
int main() {
	string s;
	while (getline(cin, s) && s != "e/o/i") {
		vs line(3);
		int pos = s.find('/');
		line[0] = s.substr(0, pos);
		s = s.substr(pos + 1);
		pos = s.find('/');
		line[1] = s.substr(0, pos);
		line[2] = s.substr(pos + 1);

		bool good = true;
		for (int i = 0; i < 3; i++) {
			int numv = 0;
			for (int j = 0; j < sz(line[i]); j++) {
				if (isVowel(line[i][j]) && (j == 0 || !isVowel(line[i][j - 1])))
					numv++;
			}
			if (numv != target[i]) {
				printf("%d\n", i + 1);
				good = false;
				break;
			}
		}
		if (good)
			printf("Y\n");
	}
}
