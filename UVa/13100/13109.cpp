#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, w, ans = 0;
		cin >> n >> w;
		vi elephants(n);
		read(elephants);
		sort(all(elephants));
		irep(e, elephants) {
			if (e > w)
				break;
			ans++;
			w -= e;
		}
		print(ans);
	}
}
