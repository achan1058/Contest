#include <bits/stdc++.h>
#include "header.h"

class Dice {
public:
	int top, bot, front, back, left, right;

	Dice() :
		top(1), bot(6), back(2), front(5), left(3), right(4) {};
	void North() {
		int temp = top;
		top = front;
		front = bot;
		bot = back;
		back = temp;
	}
	void South() {
		int temp = top;
		top = back;
		back = bot;
		bot = front;
		front = temp;
	}
	void East() {
		int temp = top;
		top = left;
		left = bot;
		bot = right;
		right = temp;
	}
	void West() {
		int temp = top;
		top = right;
		right = bot;
		bot = left;
		left = temp;
	}
};

int main() {
	int n;
	string s;
	while (cin >> n && n != 0) {
		Dice dice;
		rep(i, 0, n) {
			cin >> s;
			if (s == "north")
				dice.North();
			else if (s == "south")
				dice.South();
			else if (s == "east")
				dice.East();
			else if (s == "west")
				dice.West();
		}

		printf("%d\n", dice.top);
	}
}
