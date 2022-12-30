#include<iostream>
using namespace std;
int main()
{
    int a,rem=0;
    int temp,new_num=0;
    cout<<"Enter a number";
    cin>>a;
    temp=a;
    while(a>0)
    {
        rem=a%10;
        new_num=((new_num*10)+rem);
        a=a/10;
    }
   //cout<<new_num;
   if(temp==new_num)
   {
    cout<<temp<<" Number is palindrome.";
   }
   else{
    cout<<temp<<" Number is not a palindrome.";
   }
    return 0;
}