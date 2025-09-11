#include<iostream>
using namespace std;
int main()
{
    int i, num, fact;
    cout<<"Enter the number for factorial: ";
    cin>>num;
    fact =1;
    for (i=num; i >= 1; --i)
    {
        //if ()
       // {
        fact=i*fact;
        cout<<i;
        if (i>1)
        {
            cout<<"x";
        }
    }
    cout<<"="<<fact;
     
    // cout<<"="<<fact<<endl;
    
}