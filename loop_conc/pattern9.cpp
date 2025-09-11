#include<iostream>
using namespace std;
int main()
{
    int k=5;
    for(int row=1; row<=5; row++)
    {
        for(int col=5; col>=5-row+1; --col)
        {
            cout<<col;
        }
        cout<<endl;
    }
} // namespace 
