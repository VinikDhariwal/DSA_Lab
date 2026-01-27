#include <iostream>
using namespace std;

int main() {
    int n;
    // Input format: Take N as input
    if (!(cin >> n)) return 0;

    // TOTAL ROWS: (2 * n) + 1
    // TOP HALF (including the middle row)
    for (int i = 0; i <= n; i++) {
        // 1. Left Part: Decreasing numbers from N down to (N-i)
        for (int j = n; j >= n - i; j--) {
            cout << j << " ";
        }

        // 2. Middle Part: Spaces 
        // Each missing number needs 2 spaces (the number slot + the separator space)
        for (int j = 1; j <= 2 * (n - i) - 1; j++) {
            cout << "  ";
        }

        // 3. Right Part: Increasing numbers from (N-i) up to N
        for (int j = n - i; j <= n; j++) {
            // Special Case: The middle row (i == n) prints '0' in the left part.
            // We skip printing 0 again here to avoid "5 4 3 2 1 0 0 1 2 3 4 5"
            if (j == 0) continue; 
            cout << j << " ";
        }
        cout << endl;
    }

    // BOTTOM HALF
    for (int i = n - 1; i >= 0; i--) {
        // 1. Left Part
        for (int j = n; j >= n - i; j--) {
            cout << j << " ";
        }

        // 2. Middle Part (Spaces)
        for (int j = 1; j <= 2 * (n - i) - 1; j++) {
            cout << "  ";
        }

        // 3. Right Part
        for (int j = n - i; j <= n; j++) {
            if (j == 0) continue;
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}