#include <iostream>
#include <math.h>
using namespace std;

int function(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return (function(n - 1) * 2) + pow(2, n);
    }
}

int main()
{
    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;
    int a = function(n);
    cout << "The value of the function at " << n << " is: " << a << endl;
    return 0;
}