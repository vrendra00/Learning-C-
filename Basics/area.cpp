#include<iostream>
using namespace std;
int main()
{
    int length , breadth, area;
    cout<<"Enter length : \n";
    cin>>length;
    cout<<"Enter Breadth\n"<<endl;
    cin>>breadth;
    area = length * breadth; // area of rectangle = length * breadth
    cout<<"Area of rectangle is : \n"<<area<<endl;
    cout<<endl;
    return 0;
}