#include <iostream>
#include <cstdio>
using namespace std;

int gcd (int i, int j) {
  if (i % j == 0)
    return j;
  else
    return gcd (j, i % j);
}

int main () {
  int m, n;

  while (cin >> m >> n) {
    printf ("%10d", m);
    printf ("%10d", n);

    if (gcd (m, n) == 1)
      cout << "    Good Choice" << endl << endl;
    else
      cout << "    Bad Choice" << endl << endl;
  }
}
