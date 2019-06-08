#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int angle;
		cin >> angle;
		angle = 180 - angle;
		print(360 % angle ? "NO" : "YES");
	}
}
