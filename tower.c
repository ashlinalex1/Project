#include <stdio.h>

// Function to move n disks from source to destination using auxiliary
void toh(int n, char source, char destination, char auxiliary) {
    // Base case: If only one disk, move it from source to destination
    if (n >= 1) {
        // Move n-1 disks from source to auxiliary using destination as auxiliary
        toh(n - 1, source, auxiliary, destination);
        
        // Move the nth disk from source to destination
        printf("\nMove disk %d from rod %c to rod %c", n, source, destination);
        
        // Move the n-1 disks from auxiliary to destination using source as auxiliary
        toh(n - 1, auxiliary, destination, source);
    }
}

int main() {
    int n; // Number of disks

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    // A, B and C are names of rods
    toh(n, 'A', 'C', 'B');

    return 0;
}
