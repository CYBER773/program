#include<iostream>
using namespace std;
int main()
{
    int i, n;
    cout<<"Enter number to check wheather it is prime or not: ";
    cin>>n;
    for ( i = 2; i < n; i++)
    {
        if(n%2==0){
             cout<<"num is not prime"<<endl;
             return 0;
        }
        
    }
    cout<<"number is prime"<<n;
    
}