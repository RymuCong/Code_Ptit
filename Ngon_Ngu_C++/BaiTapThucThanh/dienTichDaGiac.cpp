#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

struct Point {
    int x, y;
};

double calculateArea(const vector<Point>& points) {
    double area = 0.0;
    int n = points.size();
    for (int i = 0; i < n - 1; ++i) {
        area += points[i].x * points[i + 1].y - points[i + 1].x * points[i].y;
    }
    area += points[n - 1].x * points[0].y - points[0].x * points[n - 1].y;
    return fabs(area) / 2.0;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<Point> points(N);
        for (int i = 0; i < N; ++i) {
            cin >> points[i].x >> points[i].y;
        }
        cout << fixed << setprecision(3) << calculateArea(points) << endl;
    }
    return 0;
}