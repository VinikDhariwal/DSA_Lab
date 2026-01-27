#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){//4
        for(int j=1;j<=i;j++){//4
            cout<<j<<" ";//1 2 3 4
        }
        for(int j=1;j<=2*(n-i)-1;j++){//
            cout<<"  ";//
        }
        if(i!=n){//4=4
            for(int j=i;j>=1;j--){//3
                cout<<j<<" ";//3 2 1
            }
        }
        else{
            for(int j=n-1;j>=1;j--){//3
                cout<<j<<" "; //1 2 3 4 3 2 1 
            }
        }
        cout<<endl;
    }
    return 0;
}