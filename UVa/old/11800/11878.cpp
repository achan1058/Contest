#include <bits/stdc++.h>
#include "header.h"

int main() {
	int a, b, correct = 0;
	char c, sign;
	string ans;
	while (cin >> a >> sign >> b >> c >> ans) {
		if (ans == "?")
			continue;
		int ansnum = stoi(ans);
		if ((sign == '+' && a + b == ansnum) || (sign == '-' && a - b == ansnum))
			correct++;
	}
	printf("%d\n", correct);
}
