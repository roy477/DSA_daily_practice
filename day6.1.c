#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    int k = 0;
    int temp[right - left + 1];
    
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }
    
    while (i <= mid) {
        temp[k++] = arr[i++];
    }
    
    while (j <= right) {
        temp[k++] = arr[j++];
    }
    
    for (i = left, k = 0; i <= right; i++, k++) {
        arr[i] = temp[k];
    }
}

void divide(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        divide(arr, left, mid);
        divide(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void m_sort(int arr[], int len) {
    divide(arr, 0, len - 1);
}

void printArray(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[6] = {85, 76, 35, 35, 35, 42};
    int len = sizeof(arr) / sizeof(arr[0]);
    
    printf("Before sorting: ");
    printArray(arr, len);
    
    m_sort(arr, len);
    
    printf("After sorting: ");
    printArray(arr, len);
    
    return 0;
}