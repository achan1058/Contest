#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, k, f;
		string s;
		cin >> n >> k;
		priority_queue<tuple<int, int, string>> q;
		unordered_map<int, int> freq;

		rep(i, 0, n) {
			cin >> s >> f;
			freq[-i] = -f;
			q.push({ -f, -i, s });
		}

		rep(i, 0, k) {
			auto t = q.top();
			q.pop();
			print(-get<0>(t), get<2>(t));
			q.push({ get<0>(t) + freq[get<1>(t)], get<1>(t), get<2>(t) });
		}
	}
}
