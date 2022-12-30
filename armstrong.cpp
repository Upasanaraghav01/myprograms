//Armstrong Number
#include<iostream>
using namespace std;
int main(){
  int a,rem=0,sum=0,temp;
  cout<<"Enter a number to check whether it is armstrong or not";
  cin>>a;
  temp=a;
  while(a>0)
    {
      rem=a%10;
      sum+=(rem*rem*rem);
      a=a/10;
    }
  if(sum==temp)
  {
    cout<<temp<<" is an armstrong number";
  }
  else{
        cout<<temp<<" is not an armstrong number";
  }
  return 0;
}