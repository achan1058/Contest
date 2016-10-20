#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	int y, m, d;
	vector<tuple<int, int, int, string>> dates;
	forX() {
		cin >> s >> d >> m >> y;
		dates.pb({ y, m, d, s });
	}

	sort(all(dates));
	printf("%s\n%s\n", get<3>(dates.back()).c_str(), get<3>(dates[0]).c_str());
}
