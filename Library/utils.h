#pragma once
#include <bits/stdc++.h>
using namespace std;

// maps elements of a set to [0..n-1]
template<class T>
class mapper {
	unordered_map<T, int> ind;
	vector<T> label;
public:
	inline T unmap(int ind) const { return label[ind]; }
	inline int size() const { return label.size(); }
	int map(const T& e) {
		if (ind.find(e) == ind.end()) {
			int t = ind.size();
			ind[e] = t;
			label.push_back(e);
		}
		return ind[e];
	}
};

vector<string> tokenize(const string& s, int(tokenFunc)(int) = isspace, bool include_empty = false) {
	vector<string> result;
	int front = 0;
	for (int i = 0; i <= int(s.size()); i++) {
		if (i == s.size() || tokenFunc(s[i])) {
			if (include_empty || i != front)
				result.push_back(s.substr(front, i - front));
			front = i + 1;
		}
	}
	return result;
}
