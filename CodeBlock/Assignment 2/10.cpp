#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){//3
        for(int j=1;j<=i;j++){//
            cout<<"*";//5 4 3
        }
        for(int j=1;j<=2*(n-i)-1;j++){//5-4=1
            cout<<" ";//1
        }
        if(i!=n){
            for(int j=i;j>=1;j--){
                cout<<"*";
            }
        }
        else{
            for(int j=n-1;j>=1;j--){//5-1=4
                cout<<"*";
            }
        }
        cout<<endl;
    }
    for(int i=2;i<=n;i++){//2<5
        for(int j=1;j<=i;j++){//2
            cout<<"*";//2
        }
        for(int j=1;j<=2*(n-i)-1;j++){//
            cout<<" ";//5
        }
        if(i!=n){
            for(int j=i;j>=1;j--){//2
                cout<<"*";//2
            }
        }
        else{
            for(int j=n-1;j>=1;j--){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}