#include<iostream>
using namespace std;
int main()
{
    int n, pow, i, num;
    cout<<"enter the value: ";
    cin>>n;
    cout<<"enter the number of power: ";
    cin>>pow;
    num=n;
    for(i=1; i<pow; i++)
    {
        num=num*n;
    }
    cout<<num;
}