// Generate all strings of length n drawn from 0 to k-1
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

void kary(int n, int k, int arr[], int j)
{
    if (j == n)
    {
        printArray(n, arr);
        return;
    }
    for (int i = 0; i < k; i++)
    {
        arr[j] = i;
        kary(n, k, arr, j + 1);
    }
}

int main()
{
    int n, k;
    cout << "Enter the value of n:" << endl;
    cin >> n;
    cout << "Enter the value of k:" << endl;
    cin >> k;
    int arr[n];
    cout << "All the strings of length n drawn from 0 to k-1 are:" << endl;
    kary(n, k, arr, 0);
    return 0;
}