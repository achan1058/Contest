#pragma once
#define _USE_MATH_DEFINES

#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#include <ccomplex>
#include <cfenv>
#include <cinttypes>
//#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cuchar>
#include <cwchar>
#include <cwctype>

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#include <array>
#include <atomic>
#include <chrono>
#include <codecvt>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>

#define __builtin_popcount __popcnt

template<typename _EuclideanRingElement>
_EuclideanRingElement
__gcd(_EuclideanRingElement __m, _EuclideanRingElement __n) {
	while (__n != 0) {
		_EuclideanRingElement __t = __m % __n;
		__m = __n;
		__n = __t;
	}
	return __m;
}

template <typename T> inline void debug(T t) { std::cin.sync_with_stdio(1); std::cout << t << std::endl; }
template <typename T, typename... A> inline void debug(T t, A... a) { std::cin.sync_with_stdio(1); std::cout << t << " "; debug(a...); }
template <typename T> inline void debugv(T a) { std::cin.sync_with_stdio(1); for (auto& k : (a)) std::cout << k << ' '; std::cout << std::endl; }
template <typename T> inline void debugvp(T a) { std::cin.sync_with_stdio(1); for (auto& k : (a)) std::cout << k.first << ',' << k.second << ' '; std::cout << std::endl; }
template <typename T> inline void debugvv(T a) { for (auto& k : (a)) debugv(k); std::cout << std::endl; }
inline void debugvs(std::vector<std::string> a) { std::cin.sync_with_stdio(1); for (auto& k : (a)) std::cout << k << std::endl; std::cout << std::endl; }
