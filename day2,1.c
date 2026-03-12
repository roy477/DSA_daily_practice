#include <stdio.h>

int main(){
    
    int arr[3][3] = {
        {75,78,76},
        {56,85,96},
        {45,63,71},
        {75,75,26}
    };

    
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 3; ++j) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

