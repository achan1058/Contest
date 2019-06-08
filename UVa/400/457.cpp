#include <bits/stdc++.h>
#include "header.h"

int main() {
	string code = " .xW";
	forX() {
		vi dense(10), plate(42);
		read(dense);
		plate[20] = 1;

		printX("");
		rep(i, 0, 50) {
			vi p(42);
			rep(j, 1, 41) {
				printf("%c", code[plate[j]]);
				p[j] = dense[plate[j - 1] + plate[j] + plate[j + 1]];
			}
			print();
			plate = p;
		}
	}
}
