#include <bits/stdc++.h>
#include "header.h"

vvd rate = { { 0.10, 0.06, 0.02 }, { 0.25, 0.15, 0.05 }, { 0.53, 0.33, 0.13 }, { 0.87, 0.47, 0.17 }, { 1.44, 0.80, 0.30 } };
int main() {
	char c;
	string s;
	int h1, h2, m1, m2;
	while (cin >> c && c != '#') {
		int t1 = 0, t2 = 0, t3 = 0;
		int p = c - 'A';
		cin >> s >> h1 >> m1 >> h2 >> m2;

		h1 = (h1 + 16) % 24;
		h2 = (h2 + 16) % 24;
		m1 += h1 * 60;
		m2 += h2 * 60;
		if (m1 == m2) {
			t1 = 600;
			t2 = 240;
			t3 = 600;
		} else {
			if (m1 > m2)
				m2 += 1440;
			if (m1 < 600) {
				t1 += min(m2, 600) - m1;
				m1 = min(m2, 600);
			}
			if (m1 < 840) {
				t2 += min(m2, 840) - m1;
				m1 = min(m2, 840);
			}
			if (m1 < 1440) {
				t3 += min(m2, 1440) - m1;
				m1 = min(m2, 1440);
			}
			if (m1 < 2040) {
				t1 += min(m2, 2040) - m1;
				m1 = min(m2, 2040);
			}
			if (m1 < 2280) {
				t2 += min(m2, 2280) - m1;
				m1 = min(m2, 2280);
			}
			if (m1 < 2880) {
				t3 += min(m2, 2880) - m1;
				m1 = min(m2, 2880);
			}

		}

		double total = rate[p][0] * t1 + rate[p][1] * t2 + rate[p][2] * t3;
		printf("  %s%6d%6d%6d%3c%8.2f\n", s.c_str(), t1, t2, t3, c, total);
	}
}
