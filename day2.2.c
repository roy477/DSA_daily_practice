#include <stdio.h>

int main()
{
    
    int arr[3][3] = {
        {75,78,76},
        {56,85,96},
        {45,63,71},
        {75,75,26}
    };
    
    for(int i = 0; i < 3; ++i) {
        int sum_col=0;
        int sum_row=0;
        for(int j = 0; j < 3; ++j) {
            sum_row+=*(*(arr+i)+j);
            sum_col+=*(*(arr+j)+i);

        
        }
        printf("sum row %d is %d\n",sum_row);
         printf("sum row %d is %d\n",sum_col);

    }

    return 0;
}