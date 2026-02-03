#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    //flag or monitor
    bool ans = false;
    for(int i=2;i<=sqrt(n);i++){
        if (n%i==0){
            ans=true;
            break;
        }
    }
    if(ans){
        cout<<"non prime";
    }else{
        cout<<"prime";
    }
    return 0;
}