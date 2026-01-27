#include <iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n-1;j++)
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }
    for(int j=1;j<i-1;j++){
        cout<<"* ";
    }
    for(int j=1;j<=n-i;j++){
        cout<<endl;
    }
    return 0;
}