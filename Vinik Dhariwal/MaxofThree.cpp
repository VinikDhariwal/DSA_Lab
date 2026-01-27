#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    if( a>b && a>c){
        cout<<"A is greater";
    }else if( b>a && b>c){
        cout<<"B is greater";
    }else{
        cout<<"C is greater";
    }
    return 0;
}