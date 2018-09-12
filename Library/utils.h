#pragma once
#include <bits/stdc++.h>
using namespace std;

vector<int> dx4 = { 1, 0, -1, 0 }, dy4 = { 0, 1, 0, -1 };
vector<int> dx8 = { 1, 1, 1, 0, -1, -1, -1, 0 }, dy8 = { 1, 0, -1, -1, -1, 0, 1, 1 };

map<char, int> tally(const string& s) {
	map<char, int> result;
	for (auto& v : s)
		result[v]++;
	return result;
}

template<class T>
map<T, int> tally(const vector<T>& arr) {
	map<T, int> result;
	for (auto& v : arr)
		result[v]++;
	return result;
}

// maps elements of a set to [0..n-1]
template<class T>
class mapper {
	unordered_map<T, int> index;
	vector<T> label;
public:
	inline T unmap(int ind) const { return label[ind]; }
	inline int size() const { return label.size(); }
	int map(const T& e) {
		if (index.find(e) == index.end()) {
			int t = index.size();
			index[e] = t;
			label.push_back(e);
		}
		return index[e];
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
