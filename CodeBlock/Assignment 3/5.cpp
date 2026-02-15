#include <iostream>
using namespace std;

int main() {
    int N1, N2;
    cin >> N1 >> N2;

    int count = 0;
    int n = 1;

    while(count < N1) {
        int condition = 3*n + 2;

        if(condition % N2 != 0) {
            cout << condition << endl;
            count++;
        }

        n++;
    }

    return 0;
}