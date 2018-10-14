#include <iostream>
#include <cstdio>
using namespace std;

int main () {
  long long time, dec;

  while (cin >> time) {
    dec = 0;
    dec += (time / 1000000) * (60 * 60 * 100);
    dec += (time / 10000 % 100) * (60 * 100);
    dec += (time / 100 % 100) * 100;
    dec += time % 100;
    dec = dec * 100000000 / 86400000;
    printf ("%07d", dec);
    cout << endl;
  }
}
