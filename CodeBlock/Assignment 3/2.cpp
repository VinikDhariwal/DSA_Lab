#include <iostream>
using namespace std;
int main() {
    int n;
    int d;
    int count = 0;
    cin >> n;
    cin >> d;
    while (n > 0) {
        int lastDigit = n % 10;
        if (lastDigit == d) {
            count++;
        }
        n = n / 10;  
    }
    cout << count;
    return 0;
}
