#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		vi dice(5);
		read(dice);
		printf("%c\n", dice[0] + 1 == dice[1] && dice[1] + 1 == dice[2] && dice[2] + 1 == dice[3] && dice[3] + 1 == dice[4] ? 'Y' : 'N');
	}
}
