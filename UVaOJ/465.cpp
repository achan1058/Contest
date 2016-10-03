#include <bits/stdc++.h>
#include "header.h"

int main() {
	string n1, n2, s1, s2;
	char c;
	while (cin >> s1 >> c >> s2) {
		n1 = s1;
		n2 = s2;

		while (sz(n1) > 1 && n1[0] == '0')
			n1 = n1.substr(1);
		while (sz(n2) > 1 && n2[0] == '0')
			n2 = n2.substr(1);
		bool big1 = false, big2 = false, bigr = false;
		if (sz(n1) > 12)
			big1 = true;
		if (sz(n2) > 12)
			big2 = true;

		ll v1 = -1, v2 = -1;
		if (!big1) {
			v1 = stoll(n1);
			int vv1 = v1;
			if (vv1 != v1)
				big1 = true;
		}
		if (!big2) {
			v2 = stoll(n2);
			int vv2 = v2;
			if (vv2 != v2)
				big2 = true;
		}
		if (!big1 && !big2) {
			ll result;
			if (c == '+')
				result = v1 + v2;
			else
				result = v1 * v2;

			int vr = result;
			if (result != vr)
				bigr = true;
		} else {
			bigr = true;
		}

		if (((!big1 && v1 == 0) || (!big2 && v2 == 0)) && c == '*')
			bigr = false;

		printf("%s %c %s\n", s1.c_str(), c, s2.c_str());
		if (big1)
			printf("first number too big\n");
		if (big2)
			printf("second number too big\n");
		if (bigr)
			printf("result too big\n");
	}
}
