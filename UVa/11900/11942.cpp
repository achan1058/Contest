#include <bits/stdc++.h>
#include "header.h"

int main() {
	print("Lumberjacks:");
	forX() {
		vi ppl(10);
		bool inc = true, dec = true;
		read(ppl);
		rep(i, 1, 10) {
			inc = inc && ppl[i] > ppl[i - 1];
			dec = dec && ppl[i] < ppl[i - 1];
		}
		print("%s", inc || dec ? "Ordered" : "Unordered");
	}
}
