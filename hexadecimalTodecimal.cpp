//hexadecimal  to decimal 
#include<bits/stdc++.h>
using namespace std;
int hexadecimalToDecimal(string n)
{
  int size=n.size(),rem,ans=0,x=1;
  for(int i=size-1;i>=0;i--)
    {
      if(n[i]>='0'&&n[i]<=9)
      {
      ans+=(n[i]*x);
      }
      else
      {
        if(n[i]>='A'&&n[i]<='F')
        {
      ans+=x*(n[i]-'A'+10); 
        }
      }
            x*=16;
    }
  return ans;
}
int main()
{
  int answer;
  string n;
  cout<<"Enter a hexadecimal number to convert into decimal";
  cin>>n;
 answer= hexadecimalToDecimal(n);
  cout<<"The decimal representation of "<<n<<" is "<<answer;
  return 0;
  }