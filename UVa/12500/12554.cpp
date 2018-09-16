#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, sung = 0;
	cin >> n;
	vs ppl(n), song(16);
	read(ppl);
	song[0] = song[4] = song[8] = song[12] = "Happy";
	song[1] = song[5] = song[9] = song[13] = "birthday";
	song[2] = song[6] = song[10] = song[14] = "to";
	song[3] = song[7] = song[15] = "you";
	song[11] = "Rujia";
	for (int i = 0; i == 0 || i % 16 || i < n; i++) {
		print("%s: %s", ppl[i % n].c_str(), song[i % 16].c_str());
	}
}
