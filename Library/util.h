#pragma once
#include "header.h"

// maps elements of a set to [1..n]
template<class T>
class Index {
	unordered_map<T, int> index;
	vector<T> label;
public:
	inline T getL(int ind) const { return label[ind]; }
	inline int size() const { return sz(label); }
	inline int getI(const T& e) {
		if (index.find(e) == index.end()) {
			int t = sz(index);
			index[e] = t;
			label.pb(e);
		}
		return index[e];
	}
};

template<class T>
map<T, int> tally(const vector<T>& arr) {
	map<T, int> result;
	fori(v, arr)
		result[v]++;
	return result;
}

// test include_empty = true
vs tokenizer(const string& s, int(tokenFunc)(int) = isspace, bool include_empty = false) {
	vs result;
	int front = 0;
	rep(i, 0, sz(s) + 1) {
		if (i == sz(s) || tokenFunc(s[i])) {
			if (include_empty || i != front)
				result.pb(s.substr(front, i - front));
			front = i + 1;
		}
	}
	return result;
}
