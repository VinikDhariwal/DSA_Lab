#include <iostream>
using namespace std;
int fibb(int g){
    if(g==0 || g==1){
        return g;
    }
    return fibb(g-1)+fibb(g-2);
}
int main(){
    int n;
    int g=0;
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
        cout<<fibb(g)<<" ";
        g++;
        }
        cout<<endl;
    }
    return 0;
}

