#include <bits/stdc++.h>
#include "header.h"

int main() {
	vs words;
	string s;
	while (cin >> s)
		words.push_back(s);
	for (int i = 0; i < words.size(); i++) {
		for (int k = 1; k < words[i].size(); k++) {
			string s1 = words[i].substr(0, k), s2 = words[i].substr(k);
			if (binary_search(all(words), s1) && 
				binary_search(all(words), s2)) {
				printf("%s\n", words[i].c_str());
				break;
			}
		}
	}
}
