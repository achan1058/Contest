#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	cin >> n;
	vs seats(n);
	read(seats);
	bool good = false;
	irep(s, seats) {
		if (s[0] == 'O' && s[1] == 'O') {
			s[0] = s[1] = '+';
			good = true;
			goto end;
		}
		if (s[3] == 'O' && s[4] == 'O') {
			s[3] = s[4] = '+';
			good = true;
			goto end;
		}
	}
end:;
	print(good ? "YES" : "NO");
	if (good)
		print(seats, true);
}
