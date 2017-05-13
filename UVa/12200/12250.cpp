#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	whileX(cin >> s && s != "#") {
		if (s == "HELLO")
			printc("ENGLISH\n");
		else if (s == "HOLA")
			printc("SPANISH\n");
		else if (s == "HALLO")
			printc("GERMAN\n");
		else if (s == "BONJOUR")
			printc("FRENCH\n");
		else if (s == "CIAO")
			printc("ITALIAN\n");
		else if (s == "ZDRAVSTVUJTE")
			printc("RUSSIAN\n");
		else
			printc("UNKNOWN\n");
	}
}
