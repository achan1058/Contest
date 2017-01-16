#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	forX() {
		vi dice(5);
		read(dice);
		printf("%c\n", dice == vi({ 1, 2, 3, 4, 5 }) || dice == vi({ 2, 3, 4, 5, 6 }) ? 'Y' : 'N');
	}
}
