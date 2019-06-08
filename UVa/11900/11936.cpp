#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		vi tri(3);
		read(tri);
		sort(all(tri));
		print(tri[0] <= 0 || tri[0] + tri[1] <= tri[2] ? "Wrong!!" : "OK");
	}
}
