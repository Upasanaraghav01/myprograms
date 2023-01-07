//binary to decimal 
#include<bits/stdc++.h>
using namespace std;
int BinaryToDecimal(int n)
{
  int rem,ans=0,x=1;
  while(n>0)
    {
      rem=n%10;
      ans=ans+(rem*x);
      x*=2;
      n=n/10;
    }
  return ans;
}
int main()
{
  int n,rem=0,answer;
  cout<<"Enter a binary number to convert into decimal";
  cin>>n;
  answer=BinaryToDecimal(n);
  cout<<"The decimal representation of "<<n<<" is "<<answer;
  return 0;
  }