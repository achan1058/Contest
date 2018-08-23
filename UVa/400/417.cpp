#include <bits/stdc++.h>
#include "header.h"

int main() {
	map<string, int> m;
	int count = 1;

	{
		string s(1, ' ');
		for (s[0] = 'a'; s[0] <= 'z'; s[0]++) {
			m[s] = count;
			count++;
		}
	}

	{
		string s(2, ' ');
		for (s[0] = 'a'; s[0] <= 'z'; s[0]++) {
			for (s[1] = s[0] + 1; s[1] <= 'z'; s[1]++) {
				m[s] = count;
				count++;
			}
		}
	}
	
	{
		string s(3, ' ');
		for (s[0] = 'a'; s[0] <= 'z'; s[0]++) {
			for (s[1] = s[0] + 1; s[1] <= 'z'; s[1]++) {
				for (s[2] = s[1] + 1; s[2] <= 'z'; s[2]++) {
					m[s] = count;
					count++;
				}
			}
		}
	}

	{
		string s(4, ' ');
		for (s[0] = 'a'; s[0] <= 'z'; s[0]++) {
			for (s[1] = s[0] + 1; s[1] <= 'z'; s[1]++) {
				for (s[2] = s[1] + 1; s[2] <= 'z'; s[2]++) {
					for (s[3] = s[2] + 1; s[3] <= 'z'; s[3]++) {
						m[s] = count;
						count++;
					}
				}
			}
		}
	}

	{
		string s(5, ' ');
		for (s[0] = 'a'; s[0] <= 'z'; s[0]++) {
			for (s[1] = s[0] + 1; s[1] <= 'z'; s[1]++) {
				for (s[2] = s[1] + 1; s[2] <= 'z'; s[2]++) {
					for (s[3] = s[2] + 1; s[3] <= 'z'; s[3]++) {
						for (s[4] = s[3] + 1; s[4] <= 'z'; s[4]++) {
							m[s] = count;
							count++;
						}
					}
				}
			}
		}
	}

	string s;
	while (cin >> s)
		print("%d", m[s]);
}
