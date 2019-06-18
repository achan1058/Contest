#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi dist(3);
	read(dist);
	sort(all(dist));
	print(dist[0] + dist[1] + min(dist[0] + dist[1], dist[2]));
}
