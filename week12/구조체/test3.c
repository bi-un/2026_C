#include <iostream>
#include <algorithm>

using namespace std;

struct Rect {
    int x1;
    int y1;
    int x2;
    int y2;
};

int main() {
    Rect r1, r2;
    cin >> r1.x1 >> r1.y1 >> r1.x2 >> r1.y2;
    cin >> r2.x1 >> r2.y1 >> r2.x2 >> r2.y2;

    Rect bound;
    bound.x1 = min(r1.x1, r2.x1);
    bound.y1 = min(r1.y1, r2.y1);
    bound.x2 = max(r1.x2, r2.x2);
    bound.y2 = max(r1.y2, r2.y2);

    cout << bound.x1 << " " << bound.y1 << " " << bound.x2 << " " << bound.y2 << '\n';

    return 0;
}