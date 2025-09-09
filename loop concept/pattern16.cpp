#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    for(int row=1;row<=num;row++)
    {
        for(int space=1; space<=num-row+1; space++)
        cout<<" ";
        for(int col=1; col<=row; col++)
        cout<<col;
        for(int rev=row-1; rev>=1; --rev)
        {
            cout<<rev;
        }
        cout<<endl;
        

        
    }
}