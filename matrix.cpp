//Matrix multiplication in C++
#include<iostream>
using namespace std;
int main()
{
  int n,m;
  cout<<"Enter the number of rows and columns";
  cin>>n>>m;
  int mat1[n][m],mat2[n][m];
  cout<<"Enter the elements in first matrix";
  for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
        {
          cin>>mat1[i][j];
        }
    }
  cout<<"Enter the elements of second matrix";
  for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
        {
          cin>>mat2[i][j];
        }
    }
  cout<<"The first matrix is "<<endl;
  for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
        {
          cout<<mat1[i][j]<<" ";
        }
  cout<<endl;
      }
  cout<<"The second matrix is "<<endl;
  for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
        {
          cout<<mat2[i][j]<<" ";
        }
  cout<<endl;
      }
  //multiplication
  
  return 0;
}