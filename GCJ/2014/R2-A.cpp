#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, C;
	forX() {
		cin >> N >> C;
		vi disks(N);
		irep(d, disks)
			cin >> d;

		sort(all(disks));
		int front = 0, back = N - 1, num = 0;

		while (back > front) {
			if (disks[front] + disks[back] <= C)
				front++;

			back--;
			num++;
		}

		if (front == back)
			num++;

		printp("%d\n", num);
	}
}