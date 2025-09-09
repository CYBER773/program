#include<iostream>
using namespace std;
int main()
{
    for(int row=5; row>=1; --row)
    {
        /*for(int col=row; col>=1; --col)*/
        for(int col=1; col<=row; col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
} // namespace 
