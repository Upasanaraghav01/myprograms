//pattern   ****
          //***
          //**
          //*
#include<iostream>
using namespace std;
int main()
{
  int row,col;
  cout<<"Enter number of rows";
  cin>>row;
  cout<<"Enter number of columns";
  cin>>col;
  for(int i=row;i>=1;i--)
    {
      for(int j=i;j>=1;j--)
        {
          cout<<"*";
        }
      cout<<endl;
    }
  return 0;
  }