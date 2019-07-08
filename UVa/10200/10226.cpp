#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX(true) {
		int total = 0;
		string s;
		map<string, int> count;
		while (getline(cin, s) && s != "") {
			count[s]++;
			total++;
		}

		printX();
		irep(p, count)
			print("%s %.4f", p.first.c_str(), 100. * p.second / total);
	}
}
