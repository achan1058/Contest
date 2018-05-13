#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int angle;
		cin >> angle;
		angle = 180 - angle;
		print("%s", 360 % angle ? "NO" : "YES");
	}
}
