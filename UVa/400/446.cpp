#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N;
	string s1, s2;
	char sign;
	cin >> N;
	rep(X, 0, N) {
		cin >> s1 >> sign >> s2;
		int i1 = stoi(s1, 0, 16), i2 = stoi(s2, 0, 16), result;
		if (sign == '+')
			result = i1 + i2;
		else
			result = i1 - i2;
		
		printf("%s %c %s = %d\n", bitset<13>(i1).to_string().c_str(), sign, bitset<13>(i2).to_string().c_str(), result);
	}
}
