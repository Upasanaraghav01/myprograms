//reverse an array
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,arr[n],temp=0;
  cin>>n;
  cout<<"Enter the "<<n<<" elements in array";
  int e=n-1;
  for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
  for(int i=0;i<e/2;i++,e--)
    {
      temp=arr[i];
      arr[i]=arr[e];
      arr[e]=temp;
    }
    cout<<"new array"<<endl;
  for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }

  return 0;
} 
