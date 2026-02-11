//daimond pattern
#include <iostream>
using namespace std;
void forw(int n){
    for(int i=0;i<n;i++){//1
        for(int j=0;j<n-i-1;j++){
            cout<<" "<<" ";
        }
    for(int j=0;j<2*i+1;j++){
        cout<<"*"<<" ";
    }
    for(int j=0;j<n-i-1;j++){
        cout<<" "<<" ";
    }
    cout<<endl;
    }
}
void rev(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" "<<" ";
        }
        for(int j=0;j<2*n-(2*i)-1;j++){
            cout<<"*"<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<" "<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    forw(n);
    rev(n);
}