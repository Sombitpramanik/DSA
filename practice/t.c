#include <stdio.h>

int main() {
    char some[200];
    
    // Size of the entire array in bytes
    size_t totalSize = sizeof(some);
    
    // Size of a single element in the array in bytes
    size_t elementSize = sizeof(some[0]);

    // Number of elements in the array
    size_t arraySize = totalSize / elementSize;

    printf("Total size of the array: %zu bytes\n", totalSize);
    printf("Size of a single element: %zu bytes\n", elementSize);
    printf("Number of elements in the array: %zu\n", arraySize);

    return 0;
}
