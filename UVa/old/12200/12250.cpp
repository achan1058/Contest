#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	whileX(cin >> s && s != "#") {
		printc("");
		if (s == "HELLO") {
			printf("ENGLISH\n");
		} else if (s == "HOLA") {
			printf("SPANISH\n");
		} else if (s == "HALLO") {
			printf("GERMAN\n");
		} else if (s == "BONJOUR") {
			printf("FRENCH\n");
		} else if (s == "CIAO") {
			printf("ITALIAN\n");
		} else if (s == "ZDRAVSTVUJTE") {
			printf("RUSSIAN\n");
		} else {
			printf("UNKNOWN\n");
		}
	}
}
