#include<iostream>
using namespace std;
int main()
{
    int prev=0, cur=1,x, next; // declared integer
    cout<<"enter the value";
    cin>>x;
    for (int i = 1; i <=x; i++)
    {
        cout<<prev<<" ";
        next = cur+prev;
        prev=cur;
        cur=next;

    }
}