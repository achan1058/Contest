#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	getline(cin, s);
	forX() {
		int ans = 0, ind = 0;
		vi reg(10);
		vs ram(1000, "000");
		while (getline(cin, s) && s != "") {
			ram[ind] = s;
			ind++;
		}
		ind = 0;
		while (true) {
			ans++;
			switch (ram[ind][0]) {
			case '1':
				goto end;
				break;
			case '2':
				reg[ram[ind][1] - '0'] = ram[ind][2] - '0';
				break;
			case '3':
				reg[ram[ind][1] - '0'] += ram[ind][2] - '0';
				reg[ram[ind][1] - '0'] %= 1000;
				break;
			case '4':
				reg[ram[ind][1] - '0'] *= ram[ind][2] - '0';
				reg[ram[ind][1] - '0'] %= 1000;
				break;
			case '5':
				reg[ram[ind][1] - '0'] = reg[ram[ind][2] - '0'];
				break;
			case '6':
				reg[ram[ind][1] - '0'] += reg[ram[ind][2] - '0'];
				reg[ram[ind][1] - '0'] %= 1000;
				break;
			case '7':
				reg[ram[ind][1] - '0'] *= reg[ram[ind][2] - '0'];
				reg[ram[ind][1] - '0'] %= 1000;
				break;
			case '8':
				reg[ram[ind][1] - '0'] = stoi(ram[reg[ram[ind][2] - '0']]);
				break;
			case '9':
				ram[reg[ram[ind][2] - '0']][0] = reg[ram[ind][1] - '0'] / 100 + '0';
				ram[reg[ram[ind][2] - '0']][1] = (reg[ram[ind][1] - '0'] / 10) % 10 + '0';
				ram[reg[ram[ind][2] - '0']][2] = reg[ram[ind][1] - '0'] % 10 + '0';
				break;
			case '0':
				if (reg[ram[ind][2] - '0'] != 0)
					ind = reg[ram[ind][1] - '0'] - 1;
				break;
			}
			ind = (ind + 1) % 1000;
		}
	end:;
		printX("%d\n", ans);
	}
}
