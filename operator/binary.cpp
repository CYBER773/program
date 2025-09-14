#include<iostream>
using namespace std;

int main()
{ 
   int num;
   cout<<"Enter the number: ";
   cin>>num;
   int rem, ans=0, mul=1;
   /*
   1. int
   2. break
   3. increment*/
   while (num>0)
   {
    rem=num%2;
    num=num/2;
    ans+=rem*mul; //ans=rem*mul+ans; 
    mul*=10; //mul=mul*10
    
    /* code */
    }
    cout<<ans<<endl;
   
}