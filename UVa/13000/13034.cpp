#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		bool good = true;
		vi problems(13);
		read(problems);
		irep(v, problems) {
			if (v == 0) {
				good = false;
				break;
			}
		}
		print("Set #%d: %s", X, good ? "Yes" : "No");
	}
}
