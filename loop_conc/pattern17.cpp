#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    for(int row=num;row>=1;--row)
    {
        for(int space=num-row; space>=1; --space)
        cout<<" ";
        for(int col=2*row-1; col>=1; --col)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}