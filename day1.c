#include <stdio.h>

int main() {
    int a[5] = {45, 52, 54, 75, 85};
    int len=sizeof(a)/sizeof(a[0]);
    int *start=a;
    int *last=a+len-1;
    
    while(start<last){
        int temp=*start;
        *start=*last;
        *last=temp;
        start++;
        last--;
        
    }
    for(int i=0;i<len;i++){
        printf("%d",*(a+i));
    
    }
return 0;
}