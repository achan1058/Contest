#include <bits/stdc++.h>
#include "combinatorics.h"

class VocaloidsAndSongs {
public:
	int count(int S, int gumi, int ia, int mayu) {
		vvl tb = binomialTable<ll>(50, mod);
		ll songs = 0;
		rep(i, 0, S + 1) {
			if (S - i < max(max(gumi, ia), mayu))
				break;
			ll curSongs = mul(mul(mul(tb[S - i][gumi], tb[S - i][ia]), tb[S - i][mayu]), tb[S][i]);
			songs = add(songs, i % 2 == 0 ? curSongs : mod - curSongs);
		}
		return songs;
	}
};
