#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int count = 1; count <= n; count++) {
        int ax1, ay1, ax2, ay2;
        int bx1, by1, bx2, by2;
        cin >> ax1 >> ay1 >> ax2 >> ay2;
        cin >> bx1 >> by1 >> bx2 >> by2;

        int A_left = min(ax1, ax2), A_right = max(ax1, ax2);
        int A_bottom = min(ay1, ay2), A_top = max(ay1, ay2);
        int B_left = min(bx1, bx2), B_right = max(bx1, bx2);
        int B_bottom = min(by1, by2), B_top = max(by1, by2);

        int areaA = (A_right - A_left) * (A_top - A_bottom);
        int areaB = (B_right - B_left) * (B_top - B_bottom);

        int x_overlap = max(0, min(A_right, B_right) - max(A_left, B_left));
        int y_overlap = max(0, min(A_top, B_top) - max(A_bottom, B_bottom));
        //use max function with 0, to check if two rec have overlap
        int strong = x_overlap * y_overlap;

        int weekly = areaA + areaB - 2 * strong;
        int notguard = 100 * 100 - strong - weekly;

        cout << "Night " << count << ": " << strong << ' ' << weekly << ' ' << notguard << endl;
    }

    return 0;
}
