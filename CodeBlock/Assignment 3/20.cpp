#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int og=n;
    int temp=n;
    int sum=0;
    int l=0;
    while(temp!=0){
        temp=temp/10;
        l++;
    }
    while(n!=0){
        int k=n%10;
        sum=sum+pow(k,l);
        n=n/10;
    }
    if(og==sum){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}