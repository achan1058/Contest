#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, count = 16;
	cin >> n;
	vector<string> names(n), song = { "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you" };
	while (count < n)
		count += 16;
	for (auto& s : names)
		cin >> s;
	for (int i = 0; i < count; i++)
		printf("%s: %s\n", names[i % n].c_str(), song[i % 16].c_str());
}
