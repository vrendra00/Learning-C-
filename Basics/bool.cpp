#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    bool x = true;
    bool y = false;bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun;  // Outputs 1 (true)
    cout << isFishTasty;  // Outputs 0 (false)
    cout<<x<<endl; // 1
    cout<<y<<endl; // 0
    cout<<sizeof(x)<<endl; // 1 byte
    cout<<sizeof(y)<<endl; // 1 byte
    cout<<sizeof(bool)<<endl; // 1 byte
    cout<<sizeof(true)<<endl; // 1 byte
    cout<<sizeof(false)<<endl; // 1 byte
    return 0;
}