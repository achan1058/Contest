#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	map<int, int> mp;
	int d, p, k;
	while (cin >> s && s != "#") {
		cin >> d >> p;
		mp[d] = p;
	}
	cin >> k;
	priority_queue<pii> q;
	irep(m, mp)
		q.push({ -m.y, -m.x});
	rep(i, 0, k) {
		d = -q.top().y, p = q.top().x;
		q.pop();
		q.push({ p - mp[d], -d });
		printf("%d\n", d);
	}
}
