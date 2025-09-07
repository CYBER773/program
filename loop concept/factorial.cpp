#include<iostream>
using namespace std;
int main()
{
    int i, num, fact;
    cout<<"Enter the number for factorial: ";
    cin>>num;
    fact =1;
    for (i = 1; i <= num; i++)
    {
        fact=i*fact;
    }
    cout<<fact<<endl;
    
}