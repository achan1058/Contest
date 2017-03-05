#pragma once
#include <bits/stdc++.h>
using namespace std;

// returns sign of value
template <class T> int sgn(T val) {
	return (T(0) < val) - (val < T(0));
}

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
	irep(v, arr)
		result[v]++;
	return result;
}

// test include_empty = true
vector<string> tokenizer(const string& s, int(tokenFunc)(int) = isspace, bool include_empty = false) {
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
