#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k;
	whileX(cin >> n >> k && n != 0) {
		vi wins(n), loses(n);
		int p1, p2;
		string s1, s2;
		rep(i, 0, k * n * (n - 1) / 2) {
			cin >> p1 >> s1 >> p2 >> s2;
			p1--;
			p2--;

			if ((s1 == "rock" && s2 == "scissors") || (s1 == "scissors" && s2 == "paper") || (s1 == "paper" && s2 == "rock")) {
				wins[p1]++;
				loses[p2]++;
			} else if ((s2 == "rock" && s1 == "scissors") || (s2 == "scissors" && s1 == "paper") || (s2 == "paper" && s1 == "rock")) {
				wins[p2]++;
				loses[p1]++;
			}
		}

		printX("");
		rep(i, 0, n) {
			if (wins[i] + loses[i] == 0)
				printf("-\n");
			else
				printf("%.3f\n", double(wins[i]) / (wins[i] + loses[i]));
		}
	}
}
