#include<iostream>
using namespace std;
int main()
{
    int row,col;
    for (row = 1; row <=5; row++)
    {
        for (int space = 1; space <=5-row+1; space++)
        cout<<" ";
        for(int col=1; col<=2*row-1; col=col+1)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
} 