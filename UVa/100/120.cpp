#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (getline(cin, s)) {
		printf("%s\n", s.c_str());
		stringstream ss(s);
		vi pancakes;
		while (ss >> s)
			pancakes.pb(stoi(s));

		int unsorted = sz(pancakes);
		while (unsorted > 0) {
			int ind = -1, large = 0;
			rep(i, 0, unsorted) {
				if (pancakes[i] > large) {
					large = pancakes[i];
					ind = i;
				}
			}

			if (ind == unsorted - 1) {
				unsorted--;
			} else if (ind == 0) {
				reverse(pancakes.begin(), pancakes.begin() + unsorted);
				printf("%d ", sz(pancakes) - unsorted + 1);
			} else {
				reverse(pancakes.begin(), pancakes.begin() + ind + 1);
				printf("%d ", sz(pancakes) - ind);
			}
		}
		printf("0\n");
	}
}
