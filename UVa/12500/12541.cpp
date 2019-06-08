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
	prints(ppl.back().second);
	prints(ppl[0].second);
}
