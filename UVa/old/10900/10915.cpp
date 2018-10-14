#include <iostream>
#include <string>
#include <map>
using namespace std;

int main () {
  int k, m;
  double sat[100][3];
  double stm[100][3];

  while (cin >> k >> m) {
    int total = 0;

    if (k == 0 && m == 0)
      return 0;
    for (int i = 0; i < k; i ++)
      cin >> sat[i][0] >> sat[i][1] >> sat[i][2];
    for (int i = 0; i < m; i ++) {
      cin >> stm[i][0] >> stm[i][1] >> stm[i][2];

      for (int j = 0; j < k; j ++)
        if ((sat[j][0] - stm[i][0]) * stm[i][0]
         + (sat[j][1] - stm[i][1]) * stm[i][1]
         + (sat[j][2] - stm[i][2]) * stm[i][2] > 0) {
          //cout << j << endl;
          total ++;
          break;
        }
    }

    cout << total << endl;
  }
}
