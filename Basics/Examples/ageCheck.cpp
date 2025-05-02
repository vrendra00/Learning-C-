#include<iostream>
using namespace std;
int main(){
    int age; 
    cout<<"Enter age\n";
    cin>>age;
    if (age >=13 && age<=19)
    {
        cout<<"Eligible for playing under 19 Tournament\n";
    }
    else{
        cout<<"Not Eligible\n";
    }
    return 0;
}