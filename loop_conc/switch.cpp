#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"Enter the number: ";
    cin>>i;
    switch (i)
    {
    case 1:
    cout<<"Number "<<i<<" alloted to shaksham";
    case 2 :
        cout<<"Number "<<i<<" alloted to Ravi";
        break;
    
    default:
        cout<<"Number "<<i<<" not alloted to anyone";
    }
    cout<<endl;
}