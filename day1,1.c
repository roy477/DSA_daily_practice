#include <stdio.h>

int main() {
    int a[5] = {45, 52, 54, 75, 85};
    int len = sizeof(a) / sizeof(a[0]);
    
    // Create a new array
    int b[5];
    
    // Copy elements from array a to array b using pointers
    int *source = a;
    int *destination = b;
    
    for(int i = 0; i < len; i++) {
        *destination = *source;
        source++;
        destination++;
    }
    
    // Print the new array
    printf("New array: ");
    for(int i = 0; i < len; i++) {
        printf("%d ", *(b + i));
    }
    
    return 0;
}