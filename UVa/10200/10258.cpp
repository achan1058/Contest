#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N;
	vvi scoreboard = mi(101, 10, 0);
	vi time(101), score(101);
	vb tried(101);
	cin >> N;
	string s;
	getline(cin, s);
	getline(cin, s);
	rep(X, 0, N) {
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

		if (X > 0)
			printf("\n");
		vvi output;
		rep(i, 1, 101) {
			if (tried[i])
				output.pb({ -score[i], time[i], i });
		}

		sort(all(output));
		irep(v, output)
			printf("%d %d %d\n", v[2], -v[0], v[1]);

		scoreboard = mi(101, 10, 0);
		time = vi(101), score = vi(101);
		tried = vb(101);
	}
}
