
#include <stdio.h>

int main(void) {
    int arr[] = {3, 1, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp[10];
    int i, k = 0;

    // first copy evens
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            temp[k++] = arr[i];
        }
    }
    // then copy odds
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            temp[k++] = arr[i];
        }
    }

    printf("Even then odd: ");
    for (i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");
    return 0;
}
