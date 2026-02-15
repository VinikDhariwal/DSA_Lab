#include <iostream>
using namespace std;

int main() {
    int minF, maxF, step;  //minF us kiye hai minimum degreee ke liye jaise ki 0
						   //maxF use kiy hai maximum degre ke liye jai ki isme 100
						   //step for every in between space ke liye
    cin >> minF >> maxF >> step;

    for(int F = minF; F <= maxF; F += step) {
        int C = (5 * (F - 32)) / 9; 
        cout << F << " " << C << endl;
    }

    return 0;
}