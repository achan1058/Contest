#include <bits/stdc++.h>
#include "header.h"

struct node {
	unique_ptr<node> left, right;
	unique_ptr<int> value;
};

int main() {
	string s;
	node root;
	bool good = true;
	while (cin >> s) {
		if (sz(s) > 2) {
			s = s.substr(1, sz(s) - 2);
			int pos = s.find(',');
			int v = stoi(s.substr(0, pos));
			s = s.substr(pos + 1);

			node* cur = &root;
			irep(c, s) {
				if (c == 'L') {
					if (cur->left == nullptr)
						cur->left.reset(new node);
					cur = cur->left.get();
				} else {
					if (cur->right == nullptr)
						cur->right.reset(new node);
					cur = cur->right.get();
				}
			}
			if (cur->value == nullptr)
				cur->value.reset(new int(v));
			else
				good = false;
		} else {
			vi ans;
			if (good) {
				queue<node*> q;
				q.push(&root);

				while (!q.empty()) {
					node* cur = q.front();
					q.pop();
					if (cur->value == nullptr) {
						good = false;
						break;
					}
					ans.pb(*cur->value);
					if (cur->left != nullptr)
						q.push(cur->left.get());
					if (cur->right != nullptr)
						q.push(cur->right.get());
				}
			}

			if (good) {
				rep(i, 0, sz(ans))
					printf("%d%c", ans[i], i == sz(ans) - 1 ? '\n' : ' ');
			} else {
				print("not complete");
			}
			good = true;
			root = node();
		}
	}
}
