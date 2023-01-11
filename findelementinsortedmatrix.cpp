//search element in sorted matrix
#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,m,arr[n][m],target;
  cout<<"Enter number of rows and columns respectively"<<endl;
  cin>>n>>m;
  cout<<"Enter the elements in 2-D array in ascending order or sorted in both rows and columns"<<endl;
  for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
        {
          cin>>arr[i][j];
        }
    }
  cout<<"Enter the element to search"<<endl;
  cin>>target;
  int r=0,c=m-1;
  bool found=true;
  while(r<n && c>=0)
    {
    if(arr[r][c]==target)
    {
      found=true;
    }
  else
  {
    if(arr[r][c]>target)
    {
      c--;
    }
    else{
      r++;
    }
  }
      }
  if(found)
  {
    cout<<"Element found";
  }
  else
  {
    cout<<"Element not found";
  }
  return 0;
} 
