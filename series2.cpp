//series 0 0 7 6 14 12 21 18 .... 
#include<iostream>
using namespace std;
int main()
{
  int n,a=0,p=0;
  cout<<"Enter the number of terms in the series";
  cin>>n;
  for(int i=1;i<=n;i++)
    {
      if(i%2!=0)
      {
        cout<<a<<" ";
        a=a+7;
      }
      else
      {
        cout<<(p)<<" ";
        p+=6;
      }
      
    }
  return 0;
  }