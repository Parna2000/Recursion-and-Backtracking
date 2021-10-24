// Backtracking process to print all the strings of n bits
#include <iostream>
using namespace std;

void printArray(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void binary(int n, int arr[], int i)
{
    if (i == n)
    {
        printArray(n, arr);
        return;
    }
    arr[i] = 0;
    binary(n, arr, i + 1);
    arr[i] = 1;
    binary(n, arr, i + 1);
}

int main()
{
    int n;
    cout << "Enter the value of n:" << endl;
    cin >> n;
    int a[n];
    binary(n,a,0);
    return 0;
}