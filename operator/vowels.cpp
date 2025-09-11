#include<iostream>
using namespace std;
int main()
{
    char vow;
    cout<<"Enter the character: ";
    cin>>vow;
    if (vow=='a' || vow=='e' || vow=='i'|| vow=='o'|| vow=='u')
    {
        cout<<"yes!! it is vowels"<<endl;
    }
    else
    cout<<"It's consonant!!"<<endl;
}
