#include<iostream>
using namespace std;
int main(){
  
  int books; int pen; float totalCost;
  float pricePerBook;
  float priceperPen;
  cout<<"Enter number pf books bought\n";
  cin>>books;
  cout<<"Enter number of pen bought\n";
  cin>>pen;
  cout<<"Enter price per book\n";
  cin>>pricePerBook;
  cout<<"Enter price per pen\n";
  cin>>priceperPen;
  totalCost = books*pricePerBook + pen*priceperPen;
  cout<<"Total Cost is :\n"<<totalCost;
    return 0;
}