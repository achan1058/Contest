#include <bits/stdc++.h>
#include "header.h"

vs mn = { "00", "05", "10", "15", "20", "25", "30", "35", "40", "45", "50", "55" };
vs hr = { "12", "01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11" };

class EllysTimeMachine {
public:
	string getTime(string time) {
		string ans;
		rep(i, 0, 12) {
			if (time.substr(3, 2) == mn[i])
				ans += hr[i];
		}
		ans += ":";
		rep(i, 0, 12) {
			if (time.substr(0, 2) == hr[i])
				ans += mn[i];
		}
		return ans;
	}
};
