#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <cstdio>
#include <cmath>
#include <queue>
using namespace std;

#define inf 1000000000

char dc[5] = "NESW";
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

struct Loc {
  int x, y, t;

  Loc(int x, int y, int t) : x(x), y(y), t(t) {}
};

int pos[550][550][4];
bool dir[550][550][4];

int main () {
  int r, c;
  string s;

  while (cin >> r >> c) {
    queue<Loc> q;
    memset(dir, 0, sizeof(dir));
    for (int i = 1; i <= r; i ++)
      for (int j = 1; j <= c; j ++) {
        for (int k = 0; k < 4; k ++)
          pos[i][j][k] = inf;

        if (i == r && j == c)
          break;
        cin >> s;

        for (int k = 0; k < s.size(); k ++)
          for (int l = 0; l < 4; l ++)
            if (s[k] == dc[l])
              dir[i][j][l] = true;
      }
    q.push(Loc(1, 1, 0));

    while (!q.empty()) {
      const Loc& l = q.front();

      if (l.t < pos[l.x][l.y][l.t % 4]) {
        pos[l.x][l.y][l.t % 4] = l.t;

        for (int i = 0; i < 4; i ++) {
          if (dir[l.x][l.y][i]) {
            int newd = (i + l.t) % 4;
            q.push(Loc(l.x + dx[newd], l.y + dy[newd], l.t + 1));
          }
        }
      }
      q.pop();
    }

    int ans = inf;

    for (int i = 0; i < 4; i ++)
      ans = min(ans, pos[r][c][i]);
    if (ans == inf)
      cout << "no path to exit" << endl;
    else
      cout << ans << endl;
  }
}
