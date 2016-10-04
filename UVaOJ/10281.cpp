#include <bits/stdc++.h>
#include "header.h"

int main() {
	int curh = 0, curm = 0, curs = 0;
	int newh, newm, news;
	double curp = 0, newp, total = 0;
	char c;
	string s;
	while (getline(cin, s)) {
		stringstream ss(s);
		ss >> newh >> c >> newm >> c >> news;
		int diff = (newh - curh) * 3600 + (newm - curm) * 60 + news - curs;
		total += diff * curp / 3600;

		if (ss >> newp)
			curp = newp;
		else
			printf("%s %.2lf km\n", s.c_str(), total);

		curh = newh;
		curm = newm;
		curs = news;
	}
}
