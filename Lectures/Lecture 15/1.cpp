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
    cin>>n;
    cout<<fibb(n)<<endl;
    return 0;
}

