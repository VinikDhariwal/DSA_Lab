#include <iostream>
using namespace std;
int main() {
    int n;
    int sum = 0;
    while(cin>>n) {
        sum += n;
        if (sum < 0) {
            break;
        }
        cout<<n<<endl;
    }
    return 0;
}
