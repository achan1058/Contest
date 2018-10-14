#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
#define PI acos (-1)

int main () {
  double UP, D, L, B, P, DOWN, V;

  for (int x = 1; ; x ++) {
    cin >> UP;

    if (UP < 1)
      return 0;
    if (x > 1)
      cout << endl;

    cin >> D >> L >> B >> P >> DOWN >> V;

    cout << "Scenario " << x << ":" << endl;
    cout << "     up hill           ";
    printf ("%8.2f", UP);
    cout << " sec" << endl;
    cout << "     well diameter     ";
    printf ("%8.2f", D);
    cout << " in" << endl;
    cout << "     water level       ";
    printf ("%8.2f", L);
    cout << " in" << endl;
    cout << "     bucket volume     ";
    printf ("%8.2f", B);
    cout << " cu ft" << endl;
    cout << "     bucket ascent rate";
    printf ("%8.2f", P);
    cout << " in/sec" << endl;
    cout << "     down hill         ";
    printf ("%8.2f", DOWN);
    cout << " sec" << endl;
    cout << "     required volume   ";
    printf ("%8.2f", V);
    cout << " cu ft" << endl;
    cout << "     TIME REQUIRED     ";

    D /= 12;
    L /= 12;
    P /= 12;
    double sum = 0;

    for (int i = 0; i < ceil (V / B - 1e-7); i ++) {
      sum += UP + DOWN;
      sum += sqrt (L * 2 / 32.2);
      sum += L / P;
      L += B / PI / D / D * 4;
    }

    printf ("%8.2f", sum);
    cout << " sec" << endl;
  }
}
