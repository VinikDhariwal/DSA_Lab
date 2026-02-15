#include <iostream>
using namespace std;
int main() {
    string n;
    cin >> n;
    for(int i = 0; i < n.length(); i++) {
        if(n[i] == '0') {
            n[i] = '5';
        }
    }
    cout << n;
    return 0;
}
