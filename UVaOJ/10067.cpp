#include <bits/stdc++.h>
#include "header.h"

vector<vector<vvi>> arr;
vi da = { 1, 0, 9, 0, 0, 0, 0, 0 },
db = { 0, 1, 0, 9, 0, 0, 0, 0 },
dc = { 0, 0, 0, 0, 0, 1, 0, 9 },
dd = { 0, 0, 0, 0, 1, 0, 9, 0 };
int floodfill(const vi& src, const vi& tar) {
	queue<vi> q;
	arr[src[0]][src[1]][src[2]][src[3]] = 0;
	q.push(src);

	while (!q.empty()) {
		int a = q.front()[0], b = q.front()[1], c = q.front()[2], d = q.front()[3];
		if (q.front() == tar)
			return arr[a][b][c][d];
		rep(k, 0, 8) {
			int na = (a + da[k]) % 10, nb = (b + db[k]) % 10, nc = (c + dc[k]) % 10, nd = (d + dd[k]) % 10;
			if (arr[a][b][c][d] + 1 < arr[na][nb][nc][nd]) {
				arr[na][nb][nc][nd] = arr[a][b][c][d] + 1;
				vi v = { na, nb, nc, nd };
				q.push(v);
			}
		}
		q.pop();
	}
	return -1;
}

int main() {
	int N, a, b, c, d, e;
	vi src(4), tar(4);
	cin >> N;
	rep(X, 0, N) {
		rep(k, 0, 4)
			cin >> src[k];
		rep(k, 0, 4)
			cin >> tar[k];

		cin >> e;
		arr = vector<vector<vvi>>(10, vector<vvi>(10, mi(10, 10, inf)));
		rep(k, 0, e) {
			cin >> a >> b >> c >> d;
			arr[a][b][c][d] = -1;
		}
		printf("%d\n", floodfill(src, tar));
	}
}
