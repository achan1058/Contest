#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<string> vs;

#define rep(k, a, b) for (int k = (a); k < int(b); k++)
#define irep(k, a) for (auto& k : (a))
#define sz(a) int(a.size())
#define all(c) (c).begin(), (c).end()
#define pb push_back

class Resistance {
public:
	vector<double> spyProbability(int P, int S, vector<string> missions) {
		string spies(P, '0');
		vector<double> spy_count(P);
		int result_count = 0;
		for (int i = P - S; i < P; i++)
			spies[i] = '1';
		do {
			bool is_possible = true;

			for (const auto& m : missions) {
				if (m[0] == 'S')
					continue;
				bool fail = false;
				for (int i = 0; i < P; i++) {
					if (m[i + 1] == '1' && spies[i] == '1') {
						fail = true;
						break;
					}
				}

				if (!fail) {
					is_possible = false;
					break;
				}
			}

			if (is_possible) {
				result_count++;
				for (int i = 0; i < P; i++) {
					if (spies[i] == '1')
						spy_count[i]++;
				}
			}
		} while (next_permutation(all(spies)));
		if (result_count == 0)
			return vector<double>();
		for (auto& r : spy_count)
			r /= result_count;
		return spy_count;
	}
};

// CUT begin
ifstream dat("TopCoder/TCO/2018 TCO Algorithm/Resistance.sample");

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

template <typename T> string to_string(vector<T> ts) {
    stringstream s;
    s << "[ ";
    for (int i = 0; i < int(ts.size()); ++i) {
        if (i > 0) s << ", ";
        s << to_string(ts[i]);
    }
    s << " ]";
    return s.str();
}

bool double_equal(const double &a, const double &b) { return b==b && a==a && fabs(b - a) <= 1e-9 * max(1.0, fabs(a) ); }

bool double_vector_equal (const vector<double> &expected, const vector<double> &received) {
    if (expected.size() != received.size()) return false;
    int n = expected.size();
    for (int i = 0; i < n; ++i)
        if (!double_equal(expected[i], received[i])) return false;
    return true;
}

bool do_test(int P, int S, vector<string> missions, vector<double> __expected) {
    time_t startClock = clock();
    Resistance *instance = new Resistance();
    vector<double> __result = instance->spyProbability(P, S, missions);
    double elapsed = (double)(clock() - startClock) / CLOCKS_PER_SEC;
    delete instance;

    if (double_vector_equal(__expected, __result)) {
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
        int P;
        from_stream(P);
        int S;
        from_stream(S);
        vector<string> missions;
        from_stream(missions);
        next_line();
        vector<double> __answer;
        from_stream(__answer);

        cases++;
        if (case_set.size() > 0 && case_set.find(cases - 1) == case_set.end())
            continue;

        cout << "  Testcase #" << cases - 1 << endl;
        if ( do_test(P, S, missions, __answer)) {
            passed++;
        }
    }
    if (mainProcess) {
        cout << endl << "Passed : " << passed << "/" << cases << " cases" << endl;
		time_t T = time(NULL) - 1524326660;
        double PT = T / 60.0, TT = 75.0;
        cout << "Time   : " << T / 60 << " minutes " << T % 60 << " secs" << endl;
        cout << "Score  : " << 500 * (0.3 + (0.7 * TT * TT) / (10.0 * PT * PT + TT * TT)) << " points" << endl;
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
        cout << "Resistance (500 Points)" << endl << endl;
    }
    return run_test(mainProcess, cases, argv[0]);
}
// CUT end
