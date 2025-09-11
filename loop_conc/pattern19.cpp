#include<iostream>
using namespace std;
int main()
{
    for(int row=1; row<=4; row++)
    {
        for(int col=1; col<=row; col++)
        cout<<"*";
        for(int space=2*row+1; space<=8;space++)
        cout<<" ";
        for(int col=1; col<=row; col++)
        cout<<"*";

        cout<<endl;
        //for(int space=1; space=)
    }
    // lower part
    for(int row=3; row>=1; row--)
    {
        for(int col=row; col>=1; col--)
        cout<<"*";
        for(int space=1; space<=(4-row)*2; space=space+1)
        /* space=1 this start loop from 1; space<=(4-row)*2 this print the value of
        under the loop; space++ increment of loop*/
        cout<<" ";
        for(int col=row; col>=1; col--)
        cout<<"*";
        cout<<endl;
    }
}