#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int inf = 0x3f3f3f3f;
double eps = 1e-8;
ll mod = 1000000007ll;

#define rep(k, a, b) for (int k = (a); k < int(b); k++)
#define irep(k, a) for (auto& k : (a))
#define sz(a) int(a.size())
#define all(c) (c).begin(), (c).end()
#define pb push_back

vector<ll> digits = { 1, 10, 100, 1000, 10000, 100000 };
class Deadfish {
public:
	ll sortv(ll v) {
		ll mult = 1, result = 0;
		if (v < 0) {
			mult = -1;
			v = -v;
		}
		vector<ll> digits;
		while (v > 0) {
			digits.pb(v % 10);
			v /= 10;
		}
		sort(all(digits));
		for (int i = digits.size() - 1; i >= 0; i--) {
			result *= 10;
			result += digits[i];
		}
		return result * mult;
	}

	int shortestCode(int N) {
		queue<pair<ll, int>> q;
		unordered_set<ll> hit;
		hit.insert(0);
		q.push({ 0, 0 });

		while (true) {
			ll v = q.front().first;
			int step = q.front().second;
			q.pop();
			if (v == N) {
				return step;
			} else if (abs(v) > abs(2 * N)) {
				continue;
			}

			vector<ll> todo = { v + 1 , v - 1, v * v, sortv(v) };
			for (auto t : todo) {
				if (hit.find(t) != hit.end())
					continue;
				q.push({ t, step + 1 });
				hit.insert(t);
			}
		}
		return 0;
	}
};

// CUT begin
ifstream dat("TopCoder/TCO/TCO 2018 Round 1A/Deadfish.sample");

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

template <typename T>
string to_string(T t) {
    stringstream s;
    s << t;
    return s.str();
}

string to_string(string t) {
    return "\"" + t + "\"";
}

bool do_test(int N, int __expected) {
    time_t startClock = clock();
    Deadfish *instance = new Deadfish();
    int __result = instance->shortestCode(N);
    double elapsed = (double)(clock() - startClock) / CLOCKS_PER_SEC;
    delete instance;

    if (__result == __expected) {
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
        int N;
        from_stream(N);
        next_line();
        int __answer;
        from_stream(__answer);

        cases++;
        if (case_set.size() > 0 && case_set.find(cases - 1) == case_set.end())
            continue;

        cout << "  Testcase #" << cases - 1 << endl;
        if ( do_test(N, __answer)) {
            passed++;
        }
    }
    if (mainProcess) {
        cout << endl << "Passed : " << passed << "/" << cases << " cases" << endl;
		time_t T = time(NULL) - 1524333121;
        double PT = T / 60.0, TT = 75.0;
        cout << "Time   : " << T / 60 << " minutes " << T % 60 << " secs" << endl;
        cout << "Score  : " << 1000 * (0.3 + (0.7 * TT * TT) / (10.0 * PT * PT + TT * TT)) << " points" << endl;
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
        cout << "Deadfish (1000 Points)" << endl << endl;
    }
    return run_test(mainProcess, cases, argv[0]);
}
// CUT end
