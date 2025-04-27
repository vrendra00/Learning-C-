#include<iostream>
using namespace std;
int main()
{ string name;
    int rollno;
    int _class;
    string subject[5];
    int age;
    char grade;
    cout<<"Enter your Name : \n";
    cin>>name;
    cout<<"Enter your Roll No : \n";
    cin>>rollno;    
    cout<<"Enter your Class : \n";
    cin>>_class;
    cout<<"Enter your Subject : \n";
    for(int i=0;i<5;i++)
    {
        cin>>subject[i];
    }
    cout<<"Enter your Age : \n";
    cin>>age;
    cout<<"Enter your Grade : \n";
    cin>>grade;
    return 0;
    
}