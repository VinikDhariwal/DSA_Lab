#include <iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    for(int i=1;i<=n;i++){
            for(int j=1;j<=n-1;j++){
                cout<<" ";
            }
            cout<<"* ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<" ";
        if(i!=1){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}