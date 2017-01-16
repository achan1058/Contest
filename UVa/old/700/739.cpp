#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	map<char, char> sound;
	sound['A'] = '0';
	sound['E'] = '0';
	sound['I'] = '0';
	sound['O'] = '0';
	sound['U'] = '0';
	sound['Y'] = '0';
	sound['W'] = '0';
	sound['H'] = '0';
	sound['B'] = '1';
	sound['P'] = '1';
	sound['F'] = '1';
	sound['V'] = '1';
	sound['C'] = '2';
	sound['S'] = '2';
	sound['K'] = '2';
	sound['G'] = '2';
	sound['J'] = '2';
	sound['Q'] = '2';
	sound['X'] = '2';
	sound['Z'] = '2';
	sound['D'] = '3';
	sound['T'] = '3';
	sound['L'] = '4';
	sound['M'] = '5';
	sound['N'] = '5';
	sound['R'] = '6';
	printf("         NAME                     SOUNDEX CODE\n");

	while (cin >> s) {
		printf("         %-25s", s.c_str());
		string out = string(1, s[0]);
		for (char& c : s)
			c = sound[c];
		for (int i = 1; i < sz(s); i++) {
			if (s[i] != s[i - 1] && s[i] != '0')
				out.push_back(s[i]);
		}
		out.resize(4, '0');
		printf("%s\n", out.c_str());
	}
	printf("                   END OF OUTPUT\n");
}
