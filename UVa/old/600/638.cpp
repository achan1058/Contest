#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main () {
  int x[26], y[26], n;
  char c[26];

  for (int z = 1; ; z ++) {
    vector<string> s;
    int sum = 0;
    cin >> n;

    if (n == 0)
      return 0;
    for (int i = 0; i < n; i ++)
      cin >> c[i] >> x[i] >> y[i];
    for (int i = 0; i < n; i ++)
      for (int j = i + 1; j < n; j ++)
        for (int k = j + 1; k < n; k ++) {
          if (x[i] != x[j] && x[j] != x[k] && x[k] != x[i] || y[i] != y[j] && y[j] != y[k] && y[k] != y[i])
            continue;
          for (int l = k + 1; l < n; l ++) {
            int ind[4];
            ind[0] = i;
            ind[1] = j;
            ind[2] = k;
            ind[3] = l;

            for (int ii = 0; ii < 4; ii ++)
              for (int jj = ii + 1; jj < 4; jj ++)
                if (x[ind[ii]] > x[ind[jj]] || x[ind[ii]] == x[ind[jj]] && y[ind[ii]] > y[ind[jj]])
                  swap (ind[ii], ind[jj]);
            if (x[ind[0]] == x[ind[1]] && x[ind[2]] == x[ind[3]] && y[ind[0]] == y[ind[2]] && y[ind[1]] == y[ind[3]]) {                string str = "";
              str += c[ind[1]];
              str += c[ind[3]];
              str += c[ind[2]];
              str += c[ind[0]];
              s.push_back (str);
              sum ++;
            }
          }
        }
    sort (s.begin (), s.end ());
    cout << "Point set " << z << ":";

    if (sum == 0)
      cout << " No rectangles" << endl;
    else {
      cout << endl;

      for (int i = 0; i < sum; i ++) {
        cout << ' ' << s[i];

        if (i != sum - 1 && i % 10 == 9)
          cout << endl;
      }

      cout << endl;
    }
  }
}
