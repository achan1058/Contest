#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		vi score(7);
		read(score);

		if (score[4] < score[6])
			swap(score[4], score[6]);
		if (score[5] < score[6])
			swap(score[5], score[6]);
		int total = 0;
		rep(i, 0, 4)
			total += score[i] * 2;
		total += score[4] + score[5];
		char grade = 'F';
		if (total >= 180)
			grade = 'A';
		else if (total >= 160)
			grade = 'B';
		else if (total >= 140)
			grade = 'C';
		else if (total >= 120)
			grade = 'D';
		printc("%c\n", grade);
	}
}
