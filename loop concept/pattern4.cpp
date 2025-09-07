#include<iostream>
using namespace std;

int main()
{
    char nw;
    for ( int i =0; i < 5; i++)
    {
        for (char nw = 'a'; nw <= 'e'; nw=nw+1)
        {
            cout<<nw<<" ";
        }
        cout<<endl;
        
    }
    cout<<endl;
    for (char rg = 'a'; rg <='e'; rg=rg+1)
    {
        for (char rh = 'a'; rh <='e'; rh=rh+1)
        {
            cout<<rg<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    
}