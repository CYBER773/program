#include <iostream>
using namespace std;
int sum(int m, int n) // declare func
{
    int ans = m + n; // define function
    return ans;
}
int mul(int m, int n)
{
    int ans = m * n;
    return ans;
}
void cyber()
{
    cout << "Hello duniya";
}

int main()
{
    int a, b;
    cout << "Enter the 1st value: ";
    cin >> a;
    cout << "Enter the 2nd value: ";
    cin >> b;
    int ans = sum(a, b);
    cout << "sum of number: " << ans << endl;                  // called function
    cout << "Multiplication of number: " << mul(a, b) << endl; // function call
    cyber();
}