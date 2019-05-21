#include <bits/stdc++.h>
#include "header.h"

int main() {
	vector<pair<vi, string>> ppl;
	forX() {
		string s;
		vi date(3);
		cin >> s >> date[2] >> date[1] >> date[0];
		ppl.pb({ date, s });
	}
	sort(all(ppl));
	print("%s", ppl.back().s.c_str());
	print("%s", ppl[0].s.c_str());
}
