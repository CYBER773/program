#include<iostream>
using namespace std;

int main()
{
    /*int this code we print binary to decimal*/
   int num, mul=1, rem, ans=0;
   cout<<"Enter binary: ";
   cin>>num;
   while (num>0)
   {
        rem=num%10;
        num=num/10;
        ans=rem*mul+ans;
        mul*=2;
   }
   cout<<ans<<endl;
}