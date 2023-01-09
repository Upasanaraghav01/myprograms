//array challenge (maximum in array till i)
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,max=INT_MIN;
  cin>>n;
  int arr[n];
  cout<<"Enter "<<n<<" elements in the array";
  for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
  for(int i=0;i<n;i++)
    {
      for(int j=0;j<=i;j++)
      if(max<arr[j])
      {
        max=arr[j];
      }
      cout<<max;
    }
  
  return 0;
}