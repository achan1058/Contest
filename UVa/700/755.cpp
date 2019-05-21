#include <bits/stdc++.h>
#include "header.h"

int main() {
	map<char, int> cmap = {
		{'A', '2'},
		{'B', '2'},
		{'C', '2'},
		{'D', '3'},
		{'E', '3'},
		{'F', '3'},
		{'G', '4'},
		{'H', '4'},
		{'I', '4'},
		{'J', '5'},
		{'K', '5'},
		{'L', '5'},
		{'M', '6'},
		{'N', '6'},
		{'O', '6'},
		{'P', '7'},
		{'R', '7'},
		{'S', '7'},
		{'T', '8'},
		{'U', '8'},
		{'V', '8'},
		{'W', '9'},
		{'X', '9'},
		{'Y', '9'}
	};
	forX() {
		int n;
		string s;
		map<string, int> m;
		cin >> n;
		rep(i, 0, n) {
			cin >> s;
			string s2;
			irep(c, s) {
				if (c >= '0' && c <= '9')
					s2 += c;
				else if (c >= 'A' && c <= 'Z')
					s2 += cmap[c];
			}
			m[s2]++;
		}

		bool dup = false;
		printX("");
		irep(p, m) {
			if (p.s > 1) {
				print("%s-%s %d", p.f.substr(0, 3).c_str(), p.f.substr(3, 4).c_str(), p.s);
				dup = true;
			}
		}
		if (!dup)
			print("No duplicates.");
	}
}
