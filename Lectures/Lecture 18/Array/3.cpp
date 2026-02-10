#include <iostream>
using namespace std;

int main(){
    int n;
    int value;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter value to be found: ";
    cin>>value;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(value==arr[i]){
            cout<<i+1;
        }
    }
}