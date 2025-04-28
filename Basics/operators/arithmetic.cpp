#include<iostream>
using namespace std;
int main() {
    int a= 50 ;
    int b= 60;
    int c;
    c = a +b;
    cout<<"Sum of a and b is : \n"<<c<<endl;
    c= a-b;
    cout<<"Sum of a and b is : \n"<<c<<endl;
    c= a*b;
    cout<<"Product of a and b is : \n"<<c<<endl;
    c= a/b;
    cout<<"Division of a and b is : \n"<<c<<endl;
    c= a%b;
    cout<<"Remainder of a and b is : \n"<<c<<endl;
    c= a++;
    cout<<"Increment of a and b is : \n"<<c<<endl;
    c=b++;
    cout<<"Increment  of a and b is : \n"<<c<<endl;
    c= --a;
    cout<<"Decrement of a and b is : \n"<<c<<endl;
    c= --b;
    cout<<"Decrement of a and b is : \n"<<c<<endl;

    return 0;
}