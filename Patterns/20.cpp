// // *                 * 
// // * *             * * 
// // * * *         * * * 
// // * * * *     * * * * 
// // * * * * * * * * * * 
// // * * * *     * * * * 
// // * * *         * * * 
// // * *             * * 
// // *                 * 
// #include <iostream>
// using namespace std;
// void forw(int n){
//     int space=2*n-2;
//     for(int i=0;i<n;i++){
//         //star
//         for(int j=1;j<=i+1;j++){
//             cout<<"*"<<" ";
//         }
//         //spaces
//         for(int j=1;j<=space;j++){
//             cout<<" "<<" ";
//         }
//         //star
//         for(int j=1;j<=i+1;j++){
//             cout<<"*"<<" ";
//         }
//         space-=2;
//         cout<<endl;
//     }
// }
// void rev(int n){
//     int space=2;
//     for(int i=0;i<n-1;i++){
//         //star
//         for(int j=i+1;j<=n-1;j++){
//             cout<<"*"<<" ";
//         }
//         //space
//         for(int j=1;j<=space;j++){
//             cout<<" "<<" ";
//         }
//         //star
//         for(int j=i+1;j<=n-1;j++){
//             cout<<"*"<<" ";
//         }
//         space+=2;
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     forw(n);
//     rev(n);
// }

//another method
#include <iostream>
using namespace std;

void print(int n){
    int spaces = 2*n-2;
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        //star
        for(int j=1;j<=stars;j++){
            cout<<"*"<<" ";
        }
        //space
        for(int j=1;j<=spaces;j++){
            cout<<" "<<" ";
        }
        //star
        for(int j=1;j<=stars;j++){
        cout<<"*"<<" ";
        }
        cout<<endl;
        if(i<n)spaces-=2;
        else spaces+=2;
    }
}
int main(){
    int n;
    cin>>n;
    print(n);
}

