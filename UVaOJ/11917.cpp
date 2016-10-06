#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, d, n;
	string s;
	cin >> N;
	for (int X = 1; X <= N; X++) {
		cin >> n;
		map<string, int> days;
		for (int i = 0; i < n; i++) {
			cin >> s >> d;
			days[s] = d;
		}
		cin >> d >> s;
		if (days.find(s) == days.end() || days[s] > d + 5)
			printf("Case %d: Do your own homework!\n", X);
		else if (days[s] <= d)
			printf("Case %d: Yesss\n", X);
		else
			printf("Case %d: Late\n", X);
	}
}
