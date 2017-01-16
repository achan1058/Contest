#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, c;
	string s;
	while (cin >> n >> c && n != 0) {
		vector<string> courses(n);
		read(courses);
		bool good = true;
		for (int i = 0; i < c; i++) {
			int numc, req;
			cin >> numc >> req;
			for (int j = 0; j < numc; j++) {
				cin >> s;
				if (find(courses.begin(), courses.end(), s) != courses.end())
					req--;
			}
			if (req > 0)
				good = false;
		}
		printf("%s\n", good ? "yes" : "no");
	}
}
