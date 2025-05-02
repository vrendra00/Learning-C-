/* 
Operator	Name	Description	Example	Try it
+	Addition	Adds together two values	x + y	
-	Subtraction	Subtracts one value from another	x - y	
*	Multiplication	Multiplies two values	x * y	
/	Division	Divides one value by another	x / y	
%	Modulus	Returns the division remainder	x % y	
++	Increment	Increases the value of a variable by 1	++x	
--	Decrement	Decreases the value of a variable by 1	--x*/

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
    cout<<"Increment of a  is : \n"<<c<<endl;
    c=b++;
    cout<<"Increment  of  b is : \n"<<c<<endl;
    c= --a;
    cout<<"Decrement of a  is : \n"<<c<<endl;
    c= --b;
    cout<<"Decrement of b is : \n"<<c<<endl;

    return 0;
}