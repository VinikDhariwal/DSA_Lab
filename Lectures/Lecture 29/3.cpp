#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    vector<vector<int>> arr(r, vector<int>(c));
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < c; i++) {
        if(i % 2 == 0) {
            for(int j = 0; j < r; j++) {
                cout << arr[j][i] << " ";
            }
        } 
        else {
            for(int j = r - 1; j >= 0; j--) {
                cout << arr[j][i] << " ";
            }
        }
    }

    return 0;
}