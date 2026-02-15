#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
 
    bool ans = false;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            ans=true;
            break;
        }
    }
    if (ans){
        cout<<"Not Prime";
    }
    else{
        cout <<"Prime";
    }
    return 0;
}