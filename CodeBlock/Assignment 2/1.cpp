#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int mid = n / 2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1 || 
                i + j <= mid || j - i >= mid || 
                i - j >= mid || i + j >= n - 1 + mid) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}