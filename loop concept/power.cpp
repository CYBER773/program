#include<iostream>
using namespace std;
int main()
{
    int n, pow, num=1;
    cout<<"Enter the value: ";
    cin>>n;
    cout<<"Enter the power: ";
    cin>>pow;
    for(int i=1; i<=pow; i++){
        num=num*n;
    }
    cout<<num<<endl;
}