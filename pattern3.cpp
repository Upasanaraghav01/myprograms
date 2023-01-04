//pattern  //      1
           //    2 2
           //  3 3 3
           //4 4 4 4
#include<iostream>
using namespace std;
int main()
{
  int row,col;
  cin>>row>>col;
  for(int i=1;i<=row;i++)
    {
      for(int j=1;j<=col;j++)
        {
          if(j<=col-i)
          {
            cout<<" "<<" ";
            }
          else
          {
            cout<<i<<" ";
          }
          }
      cout<<endl;
    }
  return 0;
  }