#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int mid = n / 2;
    for (int i = 0; i < n; i++) {
        int spaces = abs(mid - i);
        int stars = n - 2 * spaces;
        for (int s = 0; s < spaces; s++)
            cout << "  ";
        for (int s = 0; s < stars; s++)
            cout << "* ";
        cout << endl;
    }
    return 0;
}
