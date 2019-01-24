#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

class Point {
public:
	int x, y;
	Point(int xone = 0, int yone = 0) {
		x = xone;
		y = yone;
	}
	bool operator <(const Point p) const {
		return x < p.x || (x == p.x && y < p.y);
	}
	bool operator ==(const Point p) const {
		return x == p.x && y == p.y;
	}
};

int crossProduct(Point a, Point b, Point c) {
	return (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
}

vector<Point> convexHull(vector<Point> p) {
	int n = p.size(), k = 0;
	if (n < 3){
		if (n == 2 && p[0] == p[1]) return {p[0]};
		return p;
	}
	sort(p.begin(), p.end());
	vector<Point> hull(2 * n);

	// Lower hull
	for (int i = 0; i < n; ++i) {
		while (k >= 2 && crossProduct(hull[k - 2], hull[k - 1], p[i]) <= 0)
			k--;
		hull[k++] = p[i];
	}
	int temp = k + 1;

	// Upper hull
	for (int i = n - 1; i > 0; --i) {
		while (k >= temp
				&& crossProduct(hull[k - 2], hull[k - 1], p[i - 1]) <= 0)
			k--;
		hull[k++] = p[i - 1];
	}
	hull.resize(k - 1);
	return hull;
}

int main() {
	int n = 0;
	cin >> n;
	while (n != 0) {

		set<Point> s;
		while (n--) {
			int x = 0, y = 0;
			cin >> x >> y;
			s.insert(Point(x, y));
		}
		vector<Point> points (begin(s),end(s));
		vector<Point> hull = convexHull(points);

		cout << hull.size() << endl;
		for (auto h : hull) {
			cout << h.x << " " << h.y << endl;
		}

		cin >> n;
	}
	return 0;
}