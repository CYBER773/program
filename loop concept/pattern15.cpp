#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    for (int rowh = 1; rowh <=num; rowh++)
    {
        for(int col=1; col<=num-rowh-1; col=col+1)
        cout<<" ";
        for(int row=1; row<=num; row=row+2)
        {
            for(int col=1; col<=row; col++)
            {
            cout<<"*";
            }
        cout<<endl;
        }

    }
    
} 
