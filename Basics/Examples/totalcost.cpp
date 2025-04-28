// calculate and output the total cost of a number of items

#include<iostream>
using namespace std;
int main()
{
    int items;
    float costPerItem;
    float totalCost;
    char currencySymbol = '$';
    cout<<"Enter items\n";
    cin>>items;
    cout<<"Enter the price of the items\n"<<currencySymbol;
    cin>>costPerItem;
    totalCost = items * costPerItem;
    cout<<"total Cost of the Item is : $ \n"<<totalCost<<endl;
return 0;
}