// Recursively check whether an array is sorted or not
#include <iostream>
using namespace std;

int IsSorted(int n, int arr[])
{
    if (n == 1)
    {
        return 1;
    }
    return arr[n - 1] < arr[n - 2] && IsSorted(n - 1, arr);
}

int main()
{
    int n;
    cout << "Enter the length of the array:" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the array of length " << n <<":"<< endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (IsSorted(n, arr))
    {
        cout << "The array is sorted" << endl;
    }
    else
    {
        cout << "The array is not sorted" << endl;
    }
    return 0;
}