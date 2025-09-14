#include<iostream>
using namespace std;

int main()
{ 
 int num,ans=0, rem;
 cin>>num;
 while (num>0)
 {
    rem=num%10;
    num=num/10;
    ans=rem+ans;
 }
 cout<<ans<<endl;
}