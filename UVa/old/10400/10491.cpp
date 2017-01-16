#include <bits/stdc++.h>
#include "header.h"

int main() {
	int cows, cars, show;
	while (cin >> cows >> cars >> show) {
		double total = cows + cars;
		double carfirst = cars / total;
		double cowfirst = cows / total;
		double carswitch = (cars - 1) / (total - show - 1);
		double cowswitch = cars / (total - show - 1);
		double prob = carfirst * carswitch + cowfirst * cowswitch;
		printf("%.5f\n", prob);
	}
}
