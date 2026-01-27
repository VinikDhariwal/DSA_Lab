#include <iostream>
using namespace std;

int main() {
    int n;
    // Input N (N must be an odd number as per constraints)
    if (!(cin >> n)) return 0;

    int mid = (n + 1) / 2;

    for (int i = 1; i <= n; i++) {
        // Determine 'r', the count of numbers to print in the current row
        // r increases until the middle row, then decreases
        int r = (i <= mid) ? i : (n - i + 1);

        // 1. LEADING SPACES
        // Each row away from the center needs 4 spaces (2 per missing number unit)
        for (int j = 1; j <= 4 * (mid - r); j++) {
            cout << " ";
        }

        // 2. LEFT SIDE NUMBERS
        // Prints numbers from 'r' down to 1
        for (int j = r; j >= 1; j--) {
            cout << j << " ";
        }

        // 3. INTERNAL GAP AND RIGHT SIDE NUMBERS
        // Only printed if we are not in the first or last row (where r=1)
        if (r > 1) {
            // The internal gap grows by 4 spaces for every row
            // We subtract 1 because the last number in the left side already printed a space
            for (int j = 1; j <= 4 * (r - 1) - 1; j++) {
                cout << " ";
            }

            // Prints numbers from 1 up to 'r'
            for (int j = 1; j <= r; j++) {
                cout << j << " ";
            }
        }
        
        // Move to the next line after finishing the row
        cout << endl;
    }

    return 0;
}