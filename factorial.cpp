#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,fact=1;;
    cout<<"Enter a number for it's factorial";
    cin>>a;
    if(a<=1)
    {
        cout<<"Factorial of "<<a<<" is"<<" 1";
    }
    else{
        if(a>1)
        {
    for(int i=1;i<=a;i++)
    {
       fact=fact*i;
    }
       cout<<"Factorial of "<<a<<" is "<<fact;
    }
    }
    return 0;
}