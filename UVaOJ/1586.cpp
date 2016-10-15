#include <bits/stdc++.h>
#include "header.h"

int main() {
	map<char, double> weight;
	weight['C'] = 12.01;
	weight['H'] = 1.008;
	weight['O'] = 16.00;
	weight['N'] = 14.01;

	int n;
	string s;
	cin >> n;
	int count = 0;
	rep(X, 0, n) {
		double total = 0;
		int count = 0;
		char cur = ' ';
		cin >> s;

		irep(c, s) {
			if (c != 'C' && c != 'H' && c != 'O' && c != 'N') {
				count *= 10;
				count += c - '0';
			} else {
				count = max(count, 1);
				total += count * weight[cur];
				count = 0;
				cur = c;
			}
		}
		count = max(count, 1);
		total += count * weight[cur];
		printf("%.3lf\n", total);
	}
}
