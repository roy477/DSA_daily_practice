#include<stdio.h>
 #include<string.h>
struct Students
{
    int reg;
    char name[50];
    float avg;    

};

int main(){
    struct Students s;
    s.reg = 123;

    strcpy(s.name, "Logu");
    s.avg = 45.5f;

    
    printf("reg: %d, name: %s, avg: %.2f\n", s.reg, s.name, s.avg);
    return 0;


}
