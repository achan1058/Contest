#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, d = 0, a = 0;
	string s;
	cin >> n >> s;
	irep(c, s) {
		if (c == 'A')
			a++;
		else
			d++;
	}
	if (a == d)
		print("Friendship");
	else if (d > a)
		print("Danik");
	else
		print("Anton");
}
