#include<iostream>
using namespace std;

int main()
{
    // for (int i = 1; i <= 5; i++)
    // {
    //     for (int j = 1; j <=5 ; j++)
    //     {
    //         cout<<j*j<<" ";
    //     }
    //     cout<<endl;
        
    // }
    for (int i = 1; i <5; i++)
    {
        /* we can use char j*/
        for (char j = 97; j <5+97; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        
    }
    cout<<endl;
    // new program printed new will be printed
    for (char k = 97; k < 5+97; k++)
    {
        for (char l = 97; l <=5+97; l++)/* we can use char l ='a' l<=e */
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
    
    
    
}