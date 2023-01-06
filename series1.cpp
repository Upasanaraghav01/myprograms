//series 0 0 2 1 4 2 6 3 8 4 .... 
#include<iostream>
using namespace std;
int main()
{
  int n,a=0,p;
  cout<<"Enter the number of terms in the series";
  cin>>n;
  for(int i=1;i<=n;i++)
    {
      if(i%2!=0)
      {
        cout<<a<<" ";
        p=a;
        a=a+2;
      }
      else
      {
        cout<<(p/2)<<" ";
      }
      
    }
  return 0;
  }