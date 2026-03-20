#include <iostream>
#include <set>
using namespace std;

int main(){
    int n;
    cin>>n;
    set<int>arr;
    for(int i=0;i<n;i++){
        int dup;
        cin>>dup;
        arr.insert(dup);
    }
    for(int dup : arr){
        cout<<dup<<" ";
    }
    return 0;
}