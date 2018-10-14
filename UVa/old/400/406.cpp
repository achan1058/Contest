#include <iostream>
#include <algorithm>
using namespace std;

int main () {
  bool a[10000];
  int n, c;

  for (int i = 1; i <= 1000; i ++)
    a[i] = true;
  for (int i = 2; i <= 1000; i ++)
    for (int j = 2; i * j <= 1000; j ++)
      a[i * j] = false;
  while (cin >> n >> c) {
    int num = 0;

    for (int i = 1; i <= n; i ++)
      if (a[i])
        num ++;
    int mi = num / 2 - c + num % 2;
    int ma = num / 2 + c;
    int i = 1;
    int count = 0;

    cout << n << ' ' << c << ':';

    for ( ; count < mi; i ++, count ++)
      if (!a[i])
        count --;
    for ( ; count < min (ma, num); i ++, count ++)
      if (a[i])
        cout << ' ' << i;
      else
        count --;

    cout << endl << endl;
  }
}
