// Tower of Hanoi problem
#include <iostream>
using namespace std;

void TowerOfHanoi(char from, char to, char aux, int n)
{
    if (n == 1)
    {
        cout << "Move disk 1 from peg " << from << " to peg " << to << endl;
        return;
    }
    // move n-1 disks from A to B using C as auxillary
    TowerOfHanoi(from, aux, to, n - 1);
    // move the remaining disk from A to C
    cout << "Move disk " << n << " from peg " << from << " to peg " << to << endl;
    // move n-1 disks from B to C using A as auxillary
    TowerOfHanoi(aux, to, from, n - 1);
}

int main()
{
    int n;
    cout << "Enter the number of disks:" << endl;
    cin >> n;
    char from = 'A';
    char to = 'C';
    char aux = 'B';
    TowerOfHanoi(from, to, aux, n);
    return 0;
}