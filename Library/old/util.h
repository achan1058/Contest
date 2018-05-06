#pragma once
#include <bits/stdc++.h>
using namespace std;

// returns sign of value
template <class T> int sgn(T val) {
	return (T(0) < val) - (val < T(0));
}
