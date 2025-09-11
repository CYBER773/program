#include<iostream>
using namespace std;
int main()
{
    for(int row=1; row<=4; row++)
    {
        for(int col=1; col<=4-row+1; col++)
        {
            cout<<"* ";
        }
        for(int space=2; space<=2*row-1; space++)
        {
            cout<<"  ";
        }
        for(int col=1; col<=4-row+1; col++)
        {
            cout<<"* ";
        }
        cout<<endl; //another one started
    }
    for(int row=4; row>=1; row--)
    {
        for(int col=1; col<=4-row+1; col++)
        cout<<"* ";
        for(int space=2*row-2; space>=1;space--)
        cout<<"  ";
        for(int col=4-row+1; col>=1; col--)
        cout<<"* ";

        cout<<endl;
    }
}