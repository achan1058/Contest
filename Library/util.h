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
	irep(v, arr)
		result[v]++;
	return result;
}
