//To swap two numbers
#include<iostream>
using namespace std;
int main()
{
  int a,b; //5,4
  cout<<"Enter two numbers to swap";
  cin>>a>>b;
  cout<<"The numbers before swapping are "<<a<<" and "<<b<<endl;
  a=a+b;//5+4=9
  b=a-b;//9-4=5
  a=a-b;//a-b
  cout<<"The numbers after swapping are "<<a<<" and "<<b;
  return 0;
}