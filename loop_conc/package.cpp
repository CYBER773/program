#include<iostream>
using namespace std;
int main()
{
    int pack;
    cout<<"Enter the package offer: ";
    cin>>pack;
    if (pack >= 8) // don't put semicolon after if statement else facing error\
    {
        cout<<"Package accepted!!!";
    }
    else
    {
        cout<<"package accepted";
    }
}