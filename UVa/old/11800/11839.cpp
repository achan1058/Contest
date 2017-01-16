#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, a;
	while (cin >> N && N != 0) {
		rep(i, 0, N) {
			char ans = ' ';
			rep(j, 0, 5) {
				cin >> a;
				if (a <= 127) {
					if (ans == ' ')
						ans = char(j + 'A');
					else
						ans = '*';
				}
			}

			if (ans == ' ')
				ans = '*';

			printf("%c\n", ans);
		}
	}
}
