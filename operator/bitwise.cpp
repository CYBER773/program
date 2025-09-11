#include<iostream>
using namespace std;
int main()
{
    // bitwise opertor
    // and (&) operator 
    int ins=2&3;
    cout<<ins<<endl;
    // or (|) operator
    int oro=2|3;
    cout<<oro<<endl;
    // xor operator
    int xoor=2^3;
    cout<<xoor<<endl;
    // left-shift (<<) operator
    int left=2<<3;//vit of 2, shift 3 time to left side 
    cout<<left<<endl;
    // right shift(>>) operator
    int right=6>>1;
    cout<<right<<endl;
    // compliment (~) operator
    int comp= ~5, comp2= ~-5;
    cout<<comp<<endl;

}