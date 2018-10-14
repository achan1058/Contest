#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a[1100000];

int main () {
  memset(a, 0, sizeof(a));
  vector<long long> prime;
  int n;

  for (int i = 1; i <= 1000001; i += 4)
    a[i] = 1;
  for (int i = 5; i <= 1000001; i += 4)
    if (a[i]) {
      prime.push_back(i);

      for (int j = 5; i * j <= 1000001; j += 4)
        a[i * j] = 0;
    }
  memset(a, 0, sizeof(a));

  for (int i = 0; i < prime.size(); i ++)
    for (int j = i; prime[i] * prime[j] <= 1000001; j ++)
      a[int(prime[i] * prime[j])] = 1;

  for (int i = 5; i <= 1000001; i += 4)
    a[i] += a[i - 4];

  while (cin >> n && n != 0)
    cout << n << ' ' << a[n] << endl;
}
