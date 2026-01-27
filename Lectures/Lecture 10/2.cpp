#include <iostream>
using namespace std;
int main(){
    int n;
    int k=1;
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" \t";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<k<<"\t";
            k++;
        }
        cout<<endl;
    }
    return 0;
}