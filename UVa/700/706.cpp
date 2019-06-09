#include <bits/stdc++.h>
#include "header.h"

int main() {
	set<int> top = { 0, 2, 3, 5, 6, 7, 8, 9 };
	set<int> left_top = { 0, 4, 5, 6, 8, 9 };
	set<int> right_top = { 0, 1, 2, 3, 4, 7, 8, 9 };
	set<int> mid = { 2, 3, 4, 5, 6, 8, 9 };
	set<int> left_bot = { 0, 2, 6, 8 };
	set<int> right_bot = { 0, 1, 3, 4, 5, 6, 7, 8, 9 };
	set<int> bot = { 0, 2, 3, 5, 6, 8, 9 };
	int len, num;
	while (cin >> len >> num && (len | num) != 0) {
		string digits = to_string(num);
		vs output = mc(2 * len + 3, sz(digits) * (len + 3) - 1, ' ');
		for (int i = 0; i < sz(digits); i++) {
			int offset = i * (len + 3), d = digits[i] - '0';
			if (top.find(d) != top.end()) {
				for (int j = 0; j < len; j++)
					output[0][offset + 1 + j] = '-';
			}
			if (mid.find(d) != mid.end()) {
				for (int j = 0; j < len; j++)
					output[len + 1][offset + 1 + j] = '-';
			}
			if (bot.find(d) != bot.end()) {
				for (int j = 0; j < len; j++)
					output[2 * len + 2][offset + 1 + j] = '-';
			}
			if (left_top.find(d) != left_top.end()) {
				for (int j = 0; j < len; j++)
					output[j + 1][offset] = '|';
			}
			if (right_top.find(d) != right_top.end()) {
				for (int j = 0; j < len; j++)
					output[j + 1][offset + len + 1] = '|';
			}
			if (left_bot.find(d) != left_bot.end()) {
				for (int j = 0; j < len; j++)
					output[len + j + 2][offset] = '|';
			}
			if (right_bot.find(d) != right_bot.end()) {
				for (int j = 0; j < len; j++)
					output[len + j + 2][offset + len + 1] = '|';
			}
		}
		print(output, true);
		print();
	}
}
