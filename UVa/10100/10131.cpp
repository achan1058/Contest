#include <bits/stdc++.h>
#include "dp_algs.h"
#include "header.h"

int main() {
	vector<tuple<int, int, int>> ele;
	int a, b;
	for (int i = 1; cin >> a >> b; i++)
		ele.pb({ a, b, i });
	sort(all(ele));
	vi weight;
	irep(w, ele)
		weight.pb(-get<1>(w));
	vi ans = lis(weight).y;
	print("%d", sz(ans));
	irep(v, ans)
		print("%d", get<2>(ele[v]));
}
