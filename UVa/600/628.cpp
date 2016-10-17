#include <bits/stdc++.h>
#include "header.h"

int main() {
	string rule;
	int n, r;
	while (cin >> n) {
		vs words(n);
		for (string& s : words)
			cin >> s;
		cin >> r;
		printf("--\n");
		for (int i = 0; i < r; i++) {
			cin >> rule;
			for (string&s : words) {
				vi nums;
				string output;
				for (int i = 0; i < rule.size(); i++) {
					if (rule[i] == '#')
						output += s;
					else {
						nums.push_back(sz(output));
						output += "0";
					}
				}

				while (true) {
					printf("%s\n", output.c_str());
					int i;
					for (i = sz(nums) - 1; i >= 0; i--) {
						if (output[nums[i]] != '9') {
							output[nums[i]]++;
							break;
						} else {
							output[nums[i]] = '0';
						}
					}

					if (i < 0)
						break;
				}
			}
		}
	}
}
