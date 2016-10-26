#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	forX() {
		vvi scoreboard = mi(101, 10, 0);
		vi time(101), score(101);
		vb tried(101);
		if (X == 1)
			getline(cin, s);
		while (getline(cin, s) && s != "") {
			int team, prob, t;
			char code;
			stringstream ss(s);
			ss >> team >> prob >> t >> code;
			if (code == 'I')
				scoreboard[team][prob]++;
			else if (code == 'C' && scoreboard[team][prob] < inf) {
				time[team] += t + 20 * scoreboard[team][prob];
				score[team]++;
				scoreboard[team][prob] = inf;
			}
			tried[team] = true;
		}

		printX("");
		vvi output;
		rep(i, 1, 101) {
			if (tried[i])
				output.pb({ -score[i], time[i], i });
		}

		sort(all(output));
		irep(v, output)
			printf("%d %d %d\n", v[2], -v[0], v[1]);
	}
}
