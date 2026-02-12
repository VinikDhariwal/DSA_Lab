#include <iostream>
using namespace std;
void forw(int n){
    int space=0;
    for(int i=0;i<n;i++){
        //stars
        for(int j=1;j<=n-i;j++){
            cout<<"*"<<" ";
        }
        //spaces
        for(int j=0;j<space;j++){
            cout<<" "<<" ";
        }
        //stars
        for(int j=1;j<=n-i;j++){
            cout<<"*"<<" ";
        }
        space+=2;
        cout<<endl;
    }
}
 void rev(int n){
    int space=2*n-2;
    for(int i=0;i<n;i++){
        //stars
        for(int j=1;j<=i+1;j++){
        cout<<"*"<<" ";
        }
        //spaces
        for(int j=1;j<=space;j++){
            cout<<" "<<" ";
        }
        //star
        for(int j=1;j<=i+1;j++){
            cout<<"*"<<" ";
        }
        space-=2;
        cout<<endl;
    }
 }
int main(){
    int n;
    cin>>n;
    forw(n);
    rev(n);
}