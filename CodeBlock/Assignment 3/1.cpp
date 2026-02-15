#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int oddSum = 0, evenSum = 0;
    int position = 1;

    while(n > 0) {
        int digit = n % 10;   

        if(position % 2 == 1)
            oddSum += digit;
        else
            evenSum += digit;

        n = n / 10; 
        position++;
    }

    cout << oddSum << endl;
    cout << evenSum;

    return 0;
}