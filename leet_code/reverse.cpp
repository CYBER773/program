#include<iostream>
using namespace std;

int main()
{ 
   int rem, num, mul=1, ans=0;
   cin>>num;
   while (num>0)
   {
       rem=num%10;
       num=num/10;
       if(ans>INT_MAX/10 || ans<INT_MIN/10)// most imp line for limit of number
       return 0;
       ans=ans*10+rem;
   }
   cout<<ans;
   

}