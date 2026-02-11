#include <iostream>
using namespace std;
void print(int n){
    int spaces = 2*(n-1);
    for(int i=1;i<=n;i++){
        //number
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        //spaces
        for(int j=1;j<=spaces;j++){
            cout<<" "<<" "; 
        }
        //number
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
        spaces=spaces-2;
    }
}
int main(){
    int n;
    cin>>n;
    print(n);
}