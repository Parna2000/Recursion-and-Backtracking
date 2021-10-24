// Finding the length of connected cells of 1s (regions) in a matrix of 0s and 1s
#include<iostream>
using namespace std;

int region(int m,int n,int i,int j,int arr[][]){

}

int main(){
    int m,n;
    count<<"For a matrix of order m*n, enter the values of m and n respectively:"<<endl;
    cin>>m;
    cin>>n;
    int arr[m][n];
    cout<<"Enter the matrix (of 0s and 1s)"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"The enetered matrix is:"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The largest region in the matrix is: "<<region(m,n,arr)<<endl;
    return 0;
}