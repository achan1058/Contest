#include <bits/stdc++.h>
#include "header.h"

string alpha = "22233344455566677778889999";
int main() {
	int n;
	forX() {
		printX("");
		map<string, int> numbers;
		string s;
		cin >> n;
		rep(i, 0, n) {
			cin >> s;
			string num(7, ' ');
			int cur = 0;
			for (int j = 0; cur < 7; j++) {
				if (isdigit(s[j])) {
					num[cur] = s[j];
					cur++;
				} else if (isalpha(s[j])) {
					num[cur] = alpha[s[j] - 'A'];
					cur++;
				}
			}

			numbers[num]++;
		}

		bool dup = false;
		irep(it, numbers) {
			if (it.y > 1) {
				printf("%s-%s %d\n", it.x.substr(0, 3).c_str(), it.x.substr(3).c_str(), it.y);
				dup = true;
			}
		}
		if (!dup)
			printf("No duplicates.\n");
	}
}
