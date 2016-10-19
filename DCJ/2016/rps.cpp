#include <bits/stdc++.h>
#include "header.h"
#include "message.h"
#include "rps_1.h"

pair<char, int> rps(int left, int right) {
	char lc, rc;
	if (right - left == 2) {
		right = left + 1;
		lc = GetFavoriteMove(left);
		rc = GetFavoriteMove(right);
	} else {
		int mid = (left + right) / 2;
		pair<char, int> result = rps(left, mid);
		lc = result.x;
		left = result.y;
		result = rps(mid, right);
		rc = result.x;
		right = result.y;
	}

	if ((lc == 'R' && rc == 'P') || (lc == 'P' && rc == 'S') || (lc == 'S' && rc == 'R'))
		return{ rc, right };
	else
		return{ lc, left };
}

pair<char, int> bigrps(int left, int right, const string& move) {
	char lc, rc;
	if (right - left == 2) {
		right = left + 1;
		lc = move[left];
		rc = move[right];
	} else {
		int mid = (left + right) / 2;
		pair<char, int> result = bigrps(left, mid, move);
		lc = result.x;
		left = result.y;
		result = bigrps(mid, right, move);
		rc = result.x;
		right = result.y;
	}

	if ((lc == 'R' && rc == 'P') || (lc == 'P' && rc == 'S') || (lc == 'S' && rc == 'R'))
		return{ rc, right };
	else
		return{ lc, left };
}

int numshard = 128;

int main() {
	int N = GetN(), nodes = NumberOfNodes(), my_id = MyNodeId();
	numshard = min(1 << (N - 1), numshard);

	int numplayers = 1 << N, bracket = numplayers / numshard;
	int left = (numshard / nodes) * my_id, right = (numshard / nodes) * (my_id + 1);
	if (my_id == nodes - 1)
		right = numshard;

	rep(i, left, right) {
		int lp = bracket * i, rp = bracket * (i + 1);
		pair<char, int> result = rps(lp, rp);
		PutInt(0, i);
		PutChar(0, result.x);
		PutInt(0, result.y);
	}

	PutInt(0, -1);
	Send(0);

	if (my_id == 0) {
		string bigmove(numshard, ' ');
		vi bigpos(numshard);
		rep(i, 0, nodes) {
			Receive(i);
			int shard = GetInt(i);
			while (shard != -1) {
				char move = GetChar(i);
				int pos = GetInt(i);
				bigmove[shard] = move;
				bigpos[shard] = pos;
				shard = GetInt(i);
			}
		}

		if (numshard == 1) {
			printf("%d\n", bigpos[0]);
		} else {
			pair<char, int> result = bigrps(0, numshard, bigmove);
			printf("%d\n", bigpos[result.y]);
		}
	}
}
