#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string Alert = "Beware of Fraud Calls";
    string FirstName = "Virendra";
    string LastName = "vishwakarma";
    string fullName = FirstName + LastName;
    string FullName = FirstName.append(LastName);
    string x= "10";
    string y="20";
    string z= x+y; // Concatenation of strings      
    cout<<z<<endl; // 1020
string alphabet = "abcdefghijklmnopqrstuvwxyz";
cout<<"Lenght of the string is :\n"<<alphabet.length()<<endl; // 26
cout<<"Size of the string is :\n"<<alphabet.size()<<endl; // 26 
cout<<"Capacity of the string is :\n"<<alphabet.capacity()<<endl; // 26
cout<<"Max size of the string is :\n"<<alphabet.max_size()<<endl; // 2^64-1
cout<<"Is the string empty :\n"<<alphabet.empty()<<endl; // 0
cout<<"First character of the string is :\n"<<alphabet.at(0)<<endl; // a
cout<<"Last character of the string is :\n"<<alphabet.at(alphabet.length()-1)<<endl; // z
cout<<"First character of the string is :\n"<<alphabet.front()<<endl; // a
cout<<"Last character of the string is :\n"<<alphabet.back()<<endl; // z
cout<<"String after erase :\n"<<alphabet.erase(0,1)<<endl; // bcdefghijklmnopqrstuvwxyz
cout<<"String after insert :\n"<<alphabet.insert(0,"a")<<endl; // abcdefghijklmnopqrstuvwxyz
cout<<"String after replace :\n"<<alphabet.replace(0,1,"A")<<endl; // Abcdefghijklmnopqrstuvwxyz
cout<<"String after clear :\n"<<alphabet.clear()<<endl; // empty string
cout<<"String after assign :\n"<<alphabet.assign("abcdefghijklmnopqrstuvwxyz")<<endl; // abcdefghijklmnopqrstuvwxyz
//cout<<"String after swap :\n"<<alphabet.swap("ABCDEFGHIJKLMNOPQRSTUVWXYZ")<<endl; // ABCDEFGHIJKLMNOPQRSTUVWXYZ
cout<<"String after find :\n"<<alphabet.find("a")<<endl; // 0   
cout<<"String after substr :\n"<<alphabet.substr(0,1)<<endl; // A
cout<<"String after compare :\n"<<alphabet.compare("ABCDEFGHIJKLMNOPQRSTUVWXYZ")<<endl; // 0
cout<<"String after tolower :\n"<<alphabet<<endl; // ABCDEFGHIJKLMNOPQRSTUVWXYZ
cout<<"String after toupper :\n"<<alphabet<<endl; // ABCDEFGHIJKLMNOPQRSTUVWXYZ

    cout<<Alert<<endl;
    cout<<fullName<<endl;
    cout<<FullName<<endl;
    string s;
    getline(cin,s);
    cout<<s<<endl;
    return 0;
}