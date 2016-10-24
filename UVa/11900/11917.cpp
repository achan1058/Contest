#include <bits/stdc++.h>
#include "header.h"

int main() {
	int d, n;
	string s;
	forX() {
		cin >> n;
		map<string, int> days;
		for (int i = 0; i < n; i++) {
			cin >> s >> d;
			days[s] = d;
		}
		cin >> d >> s;
		if (days.find(s) == days.end() || days[s] > d + 5)
			printc("Do your own homework!\n");
		else if (days[s] <= d)
			printc("Yesss\n");
		else
			printc("Late\n");
	}
}
