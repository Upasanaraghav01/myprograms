//pythagorean triplet 
#include<bits/stdc++.h>
using namespace std;
int max(int a,int b,int c)
{
  int x,y,z;
  if(a>b&&a>c)
  {
    x=a;
  }
  else
  {
    if(b>c)
    {
     x=b; 
    }
    else
    {
      x=c;
    }
  }
  return x;
}
int main()
{
  int a,b,c,max1;
  cout<<"Enter three numbers to check if these are triplets or not";
  cin>>a>>b>>c;
   max1=max(a,b,c);
  if(max1==a)
  {
    if((a*a)==(b*b)+(c*c))
    {
      cout<<"Yes it is a triplet";
    }
    else
    {
      cout<<"Not a triplet";
    }
  }
  else
  {
    if(max1==b)
    {
          if((b*b)==(a*a)+(c*c))
    {
      cout<<"Yes it is a triplet";
    }
    else
    {
      cout<<"Not a triplet";
    }
    }
    else
    {
      if(max1==c)
      {
            if((c*c)==(b*b)+(a*a))
    {
      cout<<"Yes it is a triplet";
    }
    else
    {
      cout<<"Not a triplet";
    }
      }
    }
  }
  return 0;
  }