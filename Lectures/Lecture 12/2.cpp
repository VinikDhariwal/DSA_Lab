#include <iostream>
//gcd
#include <algorithm>
//- infinity to + infinity
#include <climits>
using namespace std;
int main(){
    int c=INT_MAX;//+infinity
    int d=INT_MIN;//-infinity
    int a=5;
    int b=10;
    cout<<__algo_gcd(a,b);
    return 0;
}
