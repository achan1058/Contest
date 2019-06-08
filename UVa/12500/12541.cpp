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
	print(ppl.back().second);
	print(ppl[0].second);
}
