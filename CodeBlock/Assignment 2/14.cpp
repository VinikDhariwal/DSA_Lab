#include <iostream>
using namespace std;

int main() {
    int n;
    // Input Format: Take N as input
    if (!(cin >> n)) return 0;

    for (int i = 0; i < n; i++) {
        long long val = 1; // Starting value of each row is always 1
        for (int j = 0; j <= i; j++) {
            // Output Format: Numbers separated by a tab
            cout << val << "\t";

            /* Using the Binomial Coefficient recurrence:
               The next value in a row can be derived from the current value using:
               val = val * (row_index - col_index) / (col_index + 1)
            */
            val = val * (i - j) / (j + 1);
        }
        cout << endl;
    }

    return 0;
}