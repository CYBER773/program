#include<iostream>
using namespace std;
int main()
{
    // for(int i=1; i<=10; i++)
    // {
    //     if(i%4==0)
    //     continue;// this condition true then continue make jump to up with increment
    //     cout<<i<<" ";

    // }
    int i=1;
    while (i<=10)
    {
        if(i%4==0)
        {
            i++;
            continue;
        }
        cout<<i<<" ";
        i++;
    }
    
}