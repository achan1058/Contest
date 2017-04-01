#include <bits/stdc++.h>
#include "header.h"
#include "line.h"
#include "segment.h"

class PolygonRotation {
public:
	double vol(double w1, double w2, double dh) {
		if (abs(dh) < eps)
			return 0;
		if (abs(w1 - w2) < eps)
			return dh * w1 * w1 * M_PI;
		if (w1 > w2)
			swap(w1, w2);
		double h = dh / (w2 - w1) * w2;
		return (w2 * w2 * h - w1 * w1 * (h - dh)) * M_PI / 3;
	}
	double getVolume(vector<int> x, vector<int> y) {
		int n = sz(x);
		x.pb(x[0]);
		y.pb(y[0]);
		vector<Segment<double>> right, left;
		vector<Line<double>> lineright, lineleft;
		rep(i, 1, n) {
			right.pb(Segment<double>(ptd(x[i - 1], y[i - 1]), ptd(x[i], y[i])));
			lineright.pb(Line<double>(ptd(x[i - 1], y[i - 1]), ptd(x[i], y[i])));
			if (i != 0 && x[i] == 0)
				break;
		}
		rrep(i, n, 0) {
			left.pb(Segment<double>(ptd(-x[i], y[i]), ptd(-x[i - 1], y[i - 1])));
			lineleft.pb(Line<double>(ptd(-x[i], y[i]), ptd(-x[i - 1], y[i - 1])));
			if (x[i - 1] == 0)
				break;
		}

		vd heights;
		irep(h, y)
			heights.pb(h);
		rep(i, 0, sz(left)) {
			rep(j, 0, sz(right)) {
				if (left[i].intersect(right[j]) == 1) {
					ptd inter = lineleft[i].intersect(lineright[j]);
					if (inter.y != inf)
						heights.pb(inter.y);
				}
			}
		}

		sort(all(heights));
		vd width(sz(heights));
		rep(i, 0, sz(heights)) {
			irep(s, right) {
				assert(s.p2.y <= s.p1.y);
				assert(s.p1.x > -eps);
				assert(s.p2.x > -eps);
				if (abs(heights[i] - s.p1.y) < eps) {
					width[i] = max(width[i], s.p1.x);
					continue;
				}
				if (abs(heights[i] - s.p2.y) < eps) {
					width[i] = max(width[i], s.p2.x);
					continue;
				}
				if (heights[i] > s.p1.y)
					continue;
				if (heights[i] < s.p2.y)
					continue;

				double dy = heights[i] - s.p2.y;
				double dx = dy / (s.p1.y - s.p2.y) * (s.p1.x - s.p2.x);
				width[i] = max(width[i], dx + s.p2.x);
			}
			irep(s, left) {
				assert(s.p2.y <= s.p1.y);
				assert(s.p1.x > -eps);
				assert(s.p2.x > -eps);
				if (abs(heights[i] - s.p1.y) < eps) {
					width[i] = max(width[i], s.p1.x);
					continue;
				}
				if (abs(heights[i] - s.p2.y) < eps) {
					width[i] = max(width[i], s.p2.x);
					continue;
				}
				if (heights[i] > s.p1.y)
					continue;
				if (heights[i] < s.p2.y)
					continue;

				double dy = heights[i] - s.p2.y;
				double dx = dy / (s.p1.y - s.p2.y) * (s.p1.x - s.p2.x);
				width[i] = max(width[i], dx + s.p2.x);
			}
		}

		double ans = 0;
		rep(i, 1, sz(heights)) {
			ans += vol(width[i - 1], width[i], heights[i] - heights[i - 1]);
		}
		return ans;
	}
};
