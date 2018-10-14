#include <iostream>
#include <queue>
#include <cstring>
#include <string>
using namespace std;

int main () {
  int N, n, assign, print, lock, unlock, stop, quant;
  int var[26];
  char c[1000];
  string** program;

  cin >> N;

  for (int x = 0; x < N; x ++) {
    cin >> n >> assign >> print >> lock >> unlock >> stop >> quant;
    cin.getline (c, 900);
    program = new string*[n];

    for (int i = 0; i < 26; i ++)
      var[i] = 0;
    for (int i = 0; i < n; i ++) {
      program[i] = new string[26];

      for (int j = 0; ; j ++) {
        int t = 0;
        cin.getline (c, 900);

        if (c[0] == 0) {
          j --;
          continue;
        }

        for (int k = 0; c[k] != 0; k ++, t ++)
          if (c[k] == ' ')
            t --;
          else
            c[t] = c[k];

        c[t] = 0;
        program[i][j] = c;

        if (program[i][j] == "end")
          break;
      }
    }

    bool locked = false;
    int *line = new int[n];
    int time = quant;
    queue<int> ready, blocked;


    for (int i = 0; i < n; i ++) {
      line[i] = 0;
      ready.push (i);
    }

    if (x > 0)
      cout << endl;
    while (!ready.empty ()) {
      int cur = ready.front ();
      ready.pop ();

      while (time > 0) {
        string s = program[cur][line[cur]];

        if (s[1] == 'r') {
          cout << cur + 1 << ": " << var[s[5] - 'a'] << endl;
          time -= print;
        } else if (s[1] == '=') {
          var[s[0] - 'a'] = atoi (s.substr (2, 100).c_str ());
          time -= assign;
        } else if (s == "lock") {
          if (locked) {
            blocked.push (cur);
            time = 0;
            cur = -1;
          } else {
            locked = true;
            time -= lock;
          }
        } else if (s == "unlock") {
          if (!blocked.empty ()) {
            ready.push (blocked.front ());

            while (ready.front () != blocked.front ()) {
              ready.push (ready.front ());
              ready.pop ();
            }

            blocked.pop ();
          }

          locked = false;
          time -= unlock;
        } else if (s == "end") {
          time = 0;
          cur = -1;
        }

        if (cur != -1)
          line[cur] ++;
        //cout << cur << ' ' << s << endl;
        //cout << "time " << time << endl;
      }

      if (cur != -1)
        ready.push (cur);

      time = quant;
    }

    for (int i = 0; i < n; i ++)
      delete[] program[i];

    delete[] program;
  }
}
