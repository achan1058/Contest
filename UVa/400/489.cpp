#include <bits/stdc++.h>
#include "header.h"

int main() {
	int X;
	while (cin >> X && X != -1) {
		string tar, src;
		int wrong = 0;
		cin >> tar >> src;
		set<char> s;
		irep(c, tar)
			s.insert(c);
		set<char> t = s;
		irep(c, src) {
			if (s.find(c) == s.end()) {
				wrong++;
				if (wrong == 7)
					break;
			}
			t.erase(c);
		}
		print("Round %d", X);
		print(t.empty() ? "You win." : wrong == 7 ? "You lose." : "You chickened out.");
	}
}
