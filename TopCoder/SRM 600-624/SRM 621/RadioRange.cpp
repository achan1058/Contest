#include <bits/stdc++.h>
#include "header.h"

class RadioRange {
public:
	double RadiusProbability(vector<int> X, vector<int> Y, vector<int> R, int Z) {
		int n = sz(X);
		vd badm(n), badM(n);
		vd crit;
		crit.pb(0);
		crit.pb(Z);

		rep(i, 0, n) {
			double x = X[i], y = Y[i], r = R[i];
			if (x * x + y * y <= r * r) {
				badm[i] = 0;
				badM[i] = sqrt(x * x + y * y) + R[i];
				crit.pb(badM[i]);
			} else {
				badm[i] = sqrt(x * x + y * y) - R[i];
				badM[i] = sqrt(x * x + y * y) + R[i];
				crit.pb(badm[i]);
				crit.pb(badM[i]);
			}
		}


		sort(all(crit));
		double total = 0;

		rep(i, 0, sz(crit) - 1) {
			if (crit[i] < 0 || crit[i + 1] > Z)
				continue;
			double mid = (crit[i] + crit[i + 1]) / 2;
			bool good = true;

			rep(j, 0, n)
				if (mid >= badm[j] && mid <= badM[j]) {
					good = false;
					break;
				}
			if (good)
				total += crit[i + 1] - crit[i];
		}

		return total / Z;
	}
};

// CUT begin
ifstream dat("TopCoder/SRM 600-624/SRM 621/RadioRange.sample");

string next_line() {
    string s;
    getline(dat, s);
    return s;
}

template <typename T> void from_stream(T &t) {
    stringstream ss(next_line());
    ss >> t;
}

void from_stream(string &s) {
    s = next_line();
}

template <typename T> void from_stream(vector<T> &ts) {
    int len;
    from_stream(len);
    ts.clear();
    for (int i = 0; i < len; ++i) {
        T t;
        from_stream(t);
        ts.push_back(t);
    }
}

template <typename T>
string to_string(T t) {
    stringstream s;
    s << t;
    return s.str();
}

string to_string(string t) {
    return "\"" + t + "\"";
}

bool double_equal(const double &a, const double &b) { return b==b && a==a && fabs(b - a) <= 1e-9 * max(1.0, fabs(a) ); }

bool do_test(vector<int> X, vector<int> Y, vector<int> R, int Z, double __expected) {
    time_t startClock = clock();
    RadioRange *instance = new RadioRange();
    double __result = instance->RadiusProbability(X, Y, R, Z);
    double elapsed = (double)(clock() - startClock) / CLOCKS_PER_SEC;
    delete instance;

    if (double_equal(__expected, __result)) {
        cout << "           PASSED!" << " (" << elapsed << " seconds)" << endl;
        return true;
    }
    else {
        cout << "           FAILED!" << " (" << elapsed << " seconds)" << endl;
        cout << "           Expected: " << to_string(__expected) << endl;
        cout << "           Received: " << to_string(__result) << endl;
        return false;
    }
}

int run_test(bool mainProcess, const set<int> &case_set, const string command) {
    int cases = 0, passed = 0;
    while (true) {
        if (next_line().find("--") != 0)
            break;
        vector<int> X;
        from_stream(X);
        vector<int> Y;
        from_stream(Y);
        vector<int> R;
        from_stream(R);
        int Z;
        from_stream(Z);
        next_line();
        double __answer;
        from_stream(__answer);

        cases++;
        if (case_set.size() > 0 && case_set.find(cases - 1) == case_set.end())
            continue;

        cout << "  Testcase #" << cases - 1 << endl;
        if ( do_test(X, Y, R, Z, __answer)) {
            passed++;
        }
    }
    if (mainProcess) {
        cout << endl << "Passed : " << passed << "/" << cases << " cases" << endl;
		time_t T = time(NULL) - 1476484587;
        double PT = T / 60.0, TT = 75.0;
        cout << "Time   : " << T / 60 << " minutes " << T % 60 << " secs" << endl;
        cout << "Score  : " << 275 * (0.3 + (0.7 * TT * TT) / (10.0 * PT * PT + TT * TT)) << " points" << endl;
    }
    return 0;
}

int main(int argc, char *argv[]) {
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);
    set<int> cases;
    bool mainProcess = true;
    for (int i = 1; i < argc; ++i) {
        if ( string(argv[i]) == "-") {
            mainProcess = false;
        } else {
            cases.insert(atoi(argv[i]));
        }
    }
    if (mainProcess) {
        cout << "RadioRange (275 Points)" << endl << endl;
    }
    return run_test(mainProcess, cases, argv[0]);
}
// CUT end
