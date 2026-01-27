#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a = 0, b = 1, c;
    int count = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (count == 1) {
                cout << a << " ";
            } else if (count == 2) {
                cout << b << " ";
            } else {
                c = a + b;
                cout << c << " ";
                a = b;
                b = c;
            }
            count++;
        }
        cout << endl;
    }
    return 0;
}
