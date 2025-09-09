#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    for (int row = 0; row <=num; row++)
    {
        // space print formula 5-row
        for (int col = 0; col <=num-row; col++)
        cout<<" ";
        // number print
        for (int col = 1; col<=row; col++)
        {
            cout<<row;
        }
        cout<<endl;
    }
    cout<<endl;
    
}