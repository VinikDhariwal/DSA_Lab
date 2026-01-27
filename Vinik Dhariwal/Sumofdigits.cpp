#include <iostream>
using namespace std;
int main() {
    int n,i;
    int s = 0;
    cout<<"Enter a number:";
    cin >> n;
    for (i=1; i<=n; i++) {
        s = s + i;
    }
    cout << s;
    return 0;
}
