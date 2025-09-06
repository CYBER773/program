#include<iostream>
using namespace std;
int main()
{
    int i, j, k;
    k=0;
    cout<<"Enter the value you want to sum: ";
    cin>>j; //ask for j value
    for (i = 0; i <= j; i++)
    {
        k=k+i; // we can't enter cout here in the fuction k will store every value and we will print
    }
    cout<<k;
    
}