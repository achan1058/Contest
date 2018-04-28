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
	inline int size() const { return label.size(); }
	inline int getI(const T& e) {
		if (index.find(e) == index.end()) {
			int t = index.size();
			index[e] = t;
			label.push_back(e);
		}
		return index[e];
	}
};

template<class T>
map<T, int> tally(const vector<T>& arr) {
	map<T, int> result;
	for (auto& v : arr)
		result[v]++;
	return result;
}
