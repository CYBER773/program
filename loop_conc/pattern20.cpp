#include<iostream>
using namespace std;
int main()
{
    for(int row=1; row<=5; row++)  
    {
        for(int sps=5-row; sps>=1; sps--)
        cout<<" ";
        for(int col=row+1; col>=1; col--)
        if (col!=row)
        {
            cout<<" ";
            cout<<"*";
        }
        
        cout<<endl;
    }
    for(int row=5; row>=1; row--)
    {
        for(int sps=1; sps<=5-row+1; sps++)
        cout<<" ";
        for(int col=row; col>=1; col--)
        if (col!=row)
        {
            cout<<" ";
            cout<<"*";
        }
        
        cout<<endl;
    }
} 
