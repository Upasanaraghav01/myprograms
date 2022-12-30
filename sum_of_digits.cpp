//sum of digits of a number
#include<iostream>
using namespace std;
int main(){
  int a,rem=0,sum=0,temp;
  cout<<"Enter a number";
  cin>>a;
  temp=a;
  while(a>0)
    {
      rem=a%10;
      sum+=rem;
      a=a/10;
    }
  cout<<"The sum of digits of "<<temp<<" is "<<sum;
  return 0;
}