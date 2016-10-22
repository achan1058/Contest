#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	int X = 1;
	while (cin >> s && s != "#") {
		printc("");
		if (s == "HELLO") {
			printf("ENGLISH\n", X);
		} else if (s == "HOLA") {
			printf("SPANISH\n", X);
		} else if (s == "HALLO") {
			printf("GERMAN\n", X);
		} else if (s == "BONJOUR") {
			printf("FRENCH\n", X);
		} else if (s == "CIAO") {
			printf("ITALIAN\n", X);
		} else if (s == "ZDRAVSTVUJTE") {
			printf("RUSSIAN\n", X);
		} else {
			printf("UNKNOWN\n", X);
		}
		X++;
	}
}
