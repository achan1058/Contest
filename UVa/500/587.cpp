#include <bits/stdc++.h>
#include "utils.h"
#include "header.h"

int main() {
	string s;
	whileX(cin >> s && s != "END") {
		s.resize(s.size() - 1);
		vs tokens = tokenize(s, [](int c)->int { return c == ','; });
		double x = 0, y = 0;
		irep(t, tokens) {
			stringstream ss(t);
			int r;
			ss >> r >> t;
			double d = r;
			if (sz(t) == 2)
				d /= sqrt(2);
			irep(c, t) {
				if (c == 'N')
					y += d;
				else if (c == 'E')
					x += d;
				else if (c == 'S')
					y -= d;
				else if (c == 'W')
					x -= d;
			}
		}
		print("Map #%d", X);
		print("The treasure is located at (%.3f,%.3f).", x, y);
		print("The distance to the treasure is %.3f.\n", sqrt(x* x + y * y));
	}
}
