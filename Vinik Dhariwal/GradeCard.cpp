#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter Marks: ";
    cin>>marks;
    if(marks>=90)
        cout<<"A";
    else if(marks>=80)
        cout<<"B";
    else if(marks>=40)
        cout<<"C";
    else
        cout<<"Fail";
    return 0;
}
