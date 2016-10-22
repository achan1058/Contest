#include <bits/stdc++.h>
#include "header.h"

void printvars(const string& vars) {
	printf("%c", vars[0]);
	rep(i, 1, sz(vars))
		printf(",%c", vars[i]);
}

void backtrack(int n, const string& done, char c = 'b') {
	string space(2 * sz(done), ' ');
	if (sz(done) == n) {
		printf("%swriteln(", space.c_str());
		printvars(done);
		printf(")\n");
		return;
	}
	rrep(i, sz(done) - 1, 0) {
		printf("%s%sif %c < %c then\n", space.c_str(), i == sz(done) - 1 ? "" : "else ", done[i], c);
		string next = done.substr(0, i + 1) + c + done.substr(i + 1);
		backtrack(n, next, c + 1);
	}
	printf("%selse\n", space.c_str());
	string next = string(1, c) + done;
	backtrack(n, next, c + 1);
}

int main() {
	forX() {
		int n;
		cin >> n;
		string vars(n, 'a');
		rep(i, 0, n)
			vars[i] += i;

		printX("program sort(input,output);\n");
		printf("var\n");
		printvars(vars);
		printf(" : integer;\n");
		printf("begin\n");
		printf("  readln(");
		printvars(vars);
		printf(");\n");
		backtrack(n, "a");
		printf("end.\n");
	}
}
