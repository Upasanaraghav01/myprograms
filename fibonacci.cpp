#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"How many terms you want in series";
cin>>n;
cout<<"Enter two numbers to start a fibonacci series.";
int arr[n];
cin>>arr[0];
cin>>arr[1];
for(int i=2;i<n;i++)
{
   arr[i]=(arr[i-1]+arr[i-2]); 
}
for(int i=0;i<n;i++)
{
cout<< arr[i]<<" ";
}
    return 0;
}