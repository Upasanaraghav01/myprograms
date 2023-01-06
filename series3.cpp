//series 3 8 6 11 9 14 12 17 15 20 .... 
#include<iostream>
using namespace std;
int main()
{
  int n,a;
  cout<<"Enter the number of terms in the series";
  cin>>n;
  cout<<"Enter the first digit of the series";
  cin>>a;
  for(int i=1;i<n;i++)
    {
      if(i%2!=0)
      {
      a+=5;
      }
      else
      {
        a-=2;
      }
      }
  cout<<a;
  return 0;
  }