//max and min in array
#include<bits/stdc++.h>
using namespace std;
int find_max(int arr[],int n)
{
  int max=INT_MIN;
  for(int i=0;i<n;i++)
    {
      if(max<arr[i])
      {
        max=arr[i];
      }
    }
  return max;
}
int find_min(int arr[],int n)
{
  int min=INT_MAX;
  for(int i=0;i<n;i++)
    {
      if(min>arr[i])
      {
        min=arr[i];
      }
    }
  return min;
}
int main()
{
  int n;
  cin>>n;
  int arr[n];
  cout<<"Enter "<<n<<" elements in the array";
  for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }
  int max=find_max(arr,n);
  cout<<"The maximum element in thge array is "<<max<<endl;
  int min=find_min(arr,n);
    cout<<"The minimum element in thge array is "<<min<<endl;
  return 0;
}