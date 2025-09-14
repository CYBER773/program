#include<iostream>
using namespace std;

int main()
{
    // binary to decimal
   int num, mul=1, ans=0, rem;
   cout<<"Enter the binary: ";
   cin>>num;
   while (num>0)
   {
        rem=num%10;
        num=num/10;
        ans=rem*mul+ans;
        mul=mul*2;
   }
   // decimal to octal
   num=ans;
   ans=0;
   mul=1;
   while (num>0)
   {
        rem=num%8;
        num=num/8;
        ans=rem*mul+ans;
        mul=mul*10;

   }
   
   cout<<ans<<endl;
   
}