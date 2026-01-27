#include <iostream>
using namespace std;
int main() {
    int n;
    int r = 0;
    cout<<"Enter a number:";
    cin >> n;
    while (n > 0) {
        int digit = n % 10;
        r = r * 10 + digit; 
        n = n / 10;
    }
    cout << r;
    return 0;
}