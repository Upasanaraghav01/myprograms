//To reverse a number
#include<iostream>
using namespace std;
int main()
{
  int a,rem=0,temp,new_num=0;
  cout<<"Enter a number to reverse";
  cin>>a;
  temp=a;
  while(a>0)
    {
      rem=a%10;
      new_num=new_num*10+rem;
      a=a/10;
    }
  cout<<new_num<<" is the reverse of "<<temp;
  return 0;
}