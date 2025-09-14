#include<iostream>
using namespace std;

int main()
{ 
    int num, ans=0, rem, curl;
    cout<<"Enter the word: ";
    cin>>num;
    curl=num;
    if (num<0)
    {
        cout<<"number can't be negative"<<endl;
        return 0;
    }
    
    while(num)
    {
        rem=num%10;
        curl=curl/10;
        ans=ans*10+rem;
    }
    if (num==ans)
    {
        cout<<curl<<" is pallindrome"<<endl;
    }
    else{
        cout<<curl<<" is not pallindrome"<<endl;
    }

    


}