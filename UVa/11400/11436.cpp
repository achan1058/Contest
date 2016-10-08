#include <bits/stdc++.h>
#include "primes.h"

pair<ll, ll> best;
void test(ll n, ll dx) {
	ll dy = n / dx;
	// both checks are necessary
	if (dy < dx || dy < dx * dx)
		return;

	dy -= dx * dx;
	if (dy % 3 != 0)
		return;
	dy /= 3;
	// dx = x - y, dy = x * y

	ll y = ll((-dx + sqrt(dx * dx + 4 * dy)) / 2 + eps);
	//cout << y << ' ' << x << endl;
	if (y * (y + dx) == dy && y < best.y)
		best = { dx + y, y };


	//for (ll y = (ll)(sqrt(dy) - dx); y * (y + dx) <= dy; y++) {
	//	if (y * (y + dx) == dy && y < best.y)
	//		best = { dx + y, y };
	//}
}

int main() {
	ll biginf = ll(inf) * inf;
	vi primes = sieve(5100000);
	ll n;
	while (cin >> n && n != 0) {
		map<ll, int> primemap = tally(fastFactor(n, primes));
		auto primepow = vector<pair<ll, int>>(all(primemap));
		vi expo(sz(primepow), 0);
		best = { biginf, biginf };

		do {
			ll prod = 1;
			rep(i, 0, sz(primepow)) {
				rep(j, 0, expo[i])
					prod *= primepow[i].x;
			}

			test(n, prod);
			rrep(i, sz(primepow) - 1, 0) {
				expo[i]++;
				if (expo[i] > primepow[i].y && i > 0)
					expo[i] = 0;
				else
					break;
			}
		} while (expo[0] <= primepow[0].y);

		if (best.y != biginf)
			printf("%lld %lld\n", best.x, best.y);
		else
			printf("No solution\n");
	}
}
