#include <bits/stdc++.h>
#include "header.h"

vi dx = { 0, 1, 0, -1 }, dy = { 1, 0, -1, 0 };
int main() {
	int N, r, c;
	string s;
	cin >> N;

	rep(X, 0, N) {
		int max_len = 0;
		vector<tuple<int, int, int>> seq;
		cin >> s >> r >> c;
		vvi height = mi(r, c, 0), length = mi(r, c, 0);
		rep(i, 0, r) {
			rep(j, 0, c) {
				cin >> height[i][j];
				seq.pb(make_tuple(-height[i][j], i, j));
			}
		}

		sort(all(seq));
		irep(v, seq) {
			int x = get<1>(v), y = get<2>(v);
			rep(k, 0, 4) {
				int nx = x + dx[k], ny = y + dy[k];
				if (nx >= 0 && nx < r && ny >= 0 && ny < c && height[x][y] > height[nx][ny] && length[x][y] >= length[nx][ny]) {
					length[nx][ny] = length[x][y] + 1;
					max_len = max(length[nx][ny], max_len);
				}
			}
		}
		printf("%s: %d\n", s.c_str(), max_len + 1);
	}
}
