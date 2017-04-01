#include <bits/stdc++.h>
#include "header.h"

class PingPongQueue {
public:
	vector<int> whoPlaysNext(vector<int> skills, int N, int K) {
		queue<int> q;
		int t1 = -1, t2 = -1, numw = 0;
		irep(s, skills)
			q.push(s);
		rep(i, 0, K) {
			if (t2 == -1) {
				t2 = q.front();
				q.pop();
			}
			if (t1 == -1) {
				t1 = q.front();
				q.pop();
			}
			if (t1 < t2) {
				swap(t1, t2);
				numw = 1;
			} else {
				numw++;
			}
			if (i == K - 1)
				return{ t2, t1 };

			q.push(t2);
			t2 = -1;
			if (numw == N) {
				q.push(t1);
				t1 = -1;
				numw = 0;
			}
		}
		return vector<int>();
	}
};
