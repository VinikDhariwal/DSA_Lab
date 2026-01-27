#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    if( n>=300 && n<=460){
        cout<<"MacBook";
    }else if(n>=200 && n<=280){
        cout<<"Kurkure";
    }else if(n>1100 && n<=1500){
        cout<<"Cycle";
    }else if(n>=50 && n<=80){
        cout<<"Bike";
    }else{
        cout<<"Better Luck Next Time";
    }
    return 0;
}