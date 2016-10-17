#include <bits/stdc++.h>
#include "header.h"

struct Node {
	int value = 0, count = 0;
	Node *left = NULL, *right = NULL;
};

void buildTree(Node *head, string& s, int value, int d = 0) {
	if (s[d] == ')') {
		head->value = value;
		head->count++;
	} else if (s[d] == 'L') {
		if (head->left == NULL)
			head->left = new Node;
		buildTree(head->left, s, value, d + 1);
	} else if (s[d] == 'R') {
		if (head->right == NULL)
			head->right = new Node;
		buildTree(head->right, s, value, d + 1);
	}
}

vi transverse(Node* head) {
	queue<Node*> q;
	bool good = true;
	vi ans;
	q.push(head);

	while (!q.empty()) {
		Node* cur = q.front();
		q.pop();
		ans.push_back(cur->value);

		if (cur->count != 1)
			good = false;
		if (cur->left != NULL)
			q.push(cur->left);
		if (cur->right != NULL)
			q.push(cur->right);

		delete cur;
	}

	return good ? ans : vi();
}

int main() {
	string s;
	Node* head = new Node;
	while (cin >> s) {
		if (s == "()") {
			vi ans = transverse(head);
			if (sz(ans) == 0)
				printf("not complete\n");
			else {
				for (int i = 0; i < sz(ans); i++)
					printf("%d%c", ans[i], i == sz(ans) - 1 ? '\n' : ' ');
			}

			head = new Node;
		} else {
			stringstream ss(s);
			string todo;
			char ch;
			int v;
			ss >> ch >> v >> ch >> todo;
			buildTree(head, todo, v, 0);
		}
	}
	delete head;
}
