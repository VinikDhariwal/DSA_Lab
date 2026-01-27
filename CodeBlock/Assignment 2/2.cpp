#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {//i=5
        for (int j = 1; j <= n - i; j++) {//5-5=0
            cout << "  ";
        }
        int val = i;//5
        for (int j = 1; j <= i; j++) {//5<5
            cout << val++ << " ";//5 6 7 8 9 newval=10
        }
        val= val - 2; //10-2=8
        for (int j = 1; j <= i - 1; j++) {//4<4
            cout << val-- << " ";//8 7 6 5 newval=4
        }
        cout << endl;
    }
    return 0;
}