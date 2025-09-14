#include<iostream>
using namespace std;

int main()
{ 
   int num, ans;
   cout<<"Enter the number: ";
   cin>>num;
   if(num<=0){

       cout<<"number must be positibe";
       return 0;
   }
   while (num!=1)
   {
        if(num%2==1)
        {
            cout<<"Number is not in square of 2"<<endl;
            return 0;

        }
        num=num/2;
    }
    cout<<"Number is square of 2"<<endl;
   
}