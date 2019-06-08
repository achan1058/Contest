#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		ll s, a, b, c;
		cin >> s >> a >> b >> c;
		s /= c;
		s += s / a * b;
		printl(s);
	}
}
