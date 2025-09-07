#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j<=5; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    } //first pattern over here and begin new one
    
    for (int k = 5; k >= 1; --k)
    {
        for (int l = 5; l >= 1; --l)
        {
            cout<<l<<" ";
        }
        cout<<endl;
        
    }
    
    
}