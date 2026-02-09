#include<iostream>
using namespace std;
int main(){
  

    int arr[5]; 
    arr[0]=1;
    arr[1]=1;
    arr[2]=1;
    arr[3]=1;   
    arr[4]=1;
    
    int arr_b[]={1,2,3,4,5};
  
    int n;
    cin>>n;
    int arr_c[n]; 
    // read 
    int s=sizeof(arr_b)/sizeof(int);
    for(int i=0;i<s;i++){
        cout<<arr_b[i]<<" ";
    }   
   cout<<endl;
    for(int i=0;i<s; i++){
        cout<<arr[i]<<" ";
    }
      // update
    for(int i=0; i<s; i++){
        arr[i]+=1;

    }
    cout<<endl;
    for(int i=0; i<s;i++){
        cout<<arr[i]<<" ";
    }
    return 0;


}