#include <iostream>
using namespace std;

int main() {
    int n;
    // Input format: Take N as input
    if (!(cin >> n)) return 0;

    // TOP HALF (from N down to 0)
    for (int i = n; i >= 0; i--) {
        // 1. Leading spaces: each "missing" number needs 2 spaces 
        // (one for the number, one for the space after it)
        for (int j = 0; j < (n - i); j++) {
            cout << "  ";
        }

        // 2. Decreasing numbers: i down to 0
        for (int j = i; j >= 0; j--) {
            cout << j << " ";
        }

        // 3. Increasing numbers: 1 up to i
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    // BOTTOM HALF (from 1 up to N)
    for (int i = 1; i <= n; i++) {
        // 1. Leading spaces
        for (int j = 0; j < (n - i); j++) {
            cout << "  ";
        }

        // 2. Decreasing numbers: i down to 0
        for (int j = i; j >= 0; j--) {
            cout << j << " ";
        }

        // 3. Increasing numbers: 1 up to i
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}