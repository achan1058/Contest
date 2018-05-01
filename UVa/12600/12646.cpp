#include <bits/stdc++.h>
#include "header.h"

int main() {
	string ans = "*CBAABC*";
	vi in(3);
	while(read(in))
		print("%c", ans[4 * in[0] + 2 * in[1] + in[2]]);
}
