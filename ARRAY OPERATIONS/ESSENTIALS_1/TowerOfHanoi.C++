#include <iostream>
using namespace std;

// Function to move disks
void moveDisk(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }
    // Move n-1 disks from source to auxiliary
    moveDisk(n - 1, source, auxiliary, destination);
    // Move the nth disk from source to destination
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    // Move the n-1 disks from auxiliary to destination
    moveDisk(n - 1, auxiliary, destination, source);
}

int main() {
    int numDisks;

    cout << "Enter the number of disks: ";
    cin >> numDisks;

    cout << "The sequence of moves to solve the Tower of Hanoi is:" << endl;
    moveDisk(numDisks, 'A', 'C', 'B'); // A is source, C is destination, B is auxiliary

    return 0;
}