#include <iostream>
using namespace std;

int main()
{
    int num, ans = 0, mul = 1, rem;
    cout<<"Enter the number: ";
    cin>>num;
    if (num==0)
    return num;
   
     while (num)
    {
        rem=num%2;
        rem=rem^1;
        num=num/2;
        ans=ans+rem*mul;
        mul=mul*2;
    }
    cout<<ans<<endl;
    
}