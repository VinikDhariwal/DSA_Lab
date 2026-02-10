#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    //initialisation
    vector<int> arr;
    //updation
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.pop_back();
    //to show size of vector
    cout<<arr.size()<<endl;
    //to show capacity it is in 2^n for vector;
    cout<<arr.capacity()<<endl;
    //printing
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
        cout<<endl;
        cout<<arr.front()<<endl;
        cout<<arr.back()<<endl;
        //sort
        sort(arr.begin(),arr.end());
        //reverse
        reverse(arr.begin(),arr.end());
        //insert
        arr.insert(arr.end()-1,6);
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        //initialising array
        int n=5;
        vector<int>b(n,1);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    
}