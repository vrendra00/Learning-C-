#include<iostream>
using namespace std;
int main(){
    const int minutesPerHour=60;
    double pi = 3.14;
    const long int myLongInt = 9223372036854775807; // 64 bit integer
    const float e = 2.71828182845904523536; // 32 bit float 
    const double goldenRatio = 1.618033988749895; // 64 bit float
    const char myLetter = 'A'; // character variable    
    const string myText = "Hello World"; // string variable
    const bool myBoolean = true; // boolean variable
    const char myChar = 'A'; // character variable
    const wchar_t myWChar = L'A'; // wide character variable
    const char16_t myChar16 = u'A'; // 16 bit character variable
    const char32_t myChar32 = U'A'; // 32 bit character variable
    const short int myShortInt = 32767; // 16 bit integer variable
    const long long int myLongLongInt = 9223372036854775807; // 64 bit integer variable
    const unsigned int myUnsignedInt = 4294967295; // 32 bit unsigned integer variable
    const unsigned long int myUnsignedLongInt = 18446744073709551615; // 64 bit unsigned integer variable
    const unsigned long long int myUnsignedLongLongInt = 18446744073709551615; // 64 bit unsigned integer variable
    const signed int mySignedInt = -2147483648; // 32 bit signed integer variable
    const signed long int mySignedLongInt = -9223372036854775807; // 64 bit signed integer variable
    const signed long long int mySignedLongLongInt = -9223372036854775807; // 64 bit signed integer variable
    const float myFloat = 3.14f; // 32 bit float variable
    const double myDouble = 3.14; // 64 bit float variable
    const long double myLongDouble = 3.14; // 80 bit float variable
cout<< "Minutes in an hour: " << minutesPerHour << endl;
cout<< "Pi: " << pi << endl;
cout<< "My long int: " << myLongInt << endl;
cout<< "Euler's number: " << e << endl;
cout<< "Golden ratio: " << goldenRatio << endl;
cout<< "My letter: " << myLetter << endl;
cout<< "My text: " << myText << endl;
cout<< "My boolean: " << myBoolean << endl;
cout<< "My char: " << myChar << endl;
cout<< "My wide char: " << myWChar << endl;
cout<< "My char16: " << myChar16 << endl;
cout<< "My char32: " << myChar32 << endl;
cout<< "My short int: " << myShortInt << endl;
cout<< "My long long int: " << myLongLongInt << endl;
cout<< "My unsigned int: " << myUnsignedInt << endl;
cout<< "My unsigned long int: " << myUnsignedLongInt << endl

cout<< "My unsigned long long int: " << myUnsignedLongLongInt << endl;
cout<< "My signed int: " << mySignedInt << endl;
cout<< "My signed long int: " << mySignedLongInt << endl;
}