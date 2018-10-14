#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main () {
  string s;

  while (getline (cin, s)) {
    stringstream ss;
    bool keys[12];
    ss << s;

    for (int i = 0; i < 12; i ++)
      keys[i] = true;
    while (ss >> s) {
      int f;

      if (s == "END")
        return 0;
      if (s == "C") {
        f = 0;
      } else if (s == "C#") {
        f = 1;
      } else if (s == "D") {
        f = 2;
      } else if (s == "D#") {
        f = 3;
      } else if (s == "E") {
        f = 4;
      } else if (s == "F") {
        f = 5;
      } else if (s == "F#") {
        f = 6;
      } else if (s == "G") {
        f = 7;
      } else if (s == "G#") {
        f = 8;
      } else if (s == "A") {
        f = 9;
      } else if (s == "A#") {
        f = 10;
      } else if (s == "B") {
        f = 11;
      }

      keys[(f + 11) % 12] = false;
      keys[(f + 9) % 12] = false;
      keys[(f + 6) % 12] = false;
      keys[(f + 4) % 12] = false;
      keys[(f + 2) % 12] = false;
    }

    s = "";

    if (keys[0])
      s += "C ";
    if (keys[1])
      s += "C# ";
    if (keys[2])
      s += "D ";
    if (keys[3])
      s += "D# ";
    if (keys[4])
      s += "E ";
    if (keys[5])
      s += "F ";
    if (keys[6])
      s += "F# ";
    if (keys[7])
      s += "G ";
    if (keys[8])
      s += "G# ";
    if (keys[9])
      s += "A ";
    if (keys[10])
      s += "A# ";
    if (keys[11])
      s += "B ";

    cout << s.substr (0, s.size () - 1) << endl;
  }
}
