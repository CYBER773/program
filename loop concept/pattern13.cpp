#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    for (int row = 0; row <=num-1; row++)
    {
        //print space
        for(int col=0;col<=num-row+1;col++)
        cout<<"  ";
        //print char
        for(char col='A';col<='A'+row;col++)
        {
            cout<<" "<<col;
        }
        cout<<endl;
    }
    
} 
