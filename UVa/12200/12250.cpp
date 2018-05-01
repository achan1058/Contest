#include <bits/stdc++.h>
#include "header.h"

int main() {
	map<string, string> lang = { { "HELLO", "ENGLISH" }, { "HOLA", "SPANISH" }, { "HALLO", "GERMAN" }, { "BONJOUR", "FRENCH" }, { "CIAO", "ITALIAN" }, { "ZDRAVSTVUJTE", "RUSSIAN" } };
	string s;
	whileX(cin >> s && s != "#")
		printc("%s", lang[s] == "" ? "UNKNOWN" : lang[s].c_str());
}
