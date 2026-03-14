#include<stdio.h>
#define MAX 100
int stack[MAX];
int top=-1;

 void push(int x)
 {
    if(top==MAX-1)
    printf("the stack is over flow");
    else{
        top++;
        stack[top]=x;
    }


 }
void pop(){
    if(top == -1)
        printf("the stack is underflow\n");
    else{
        printf("Popped: %d\n", stack[top]);
        top--;
    }
    
}
 isempty()
{
    if(top==-1)
    return 1;
    else
    return 0;
}
isfull()
{
    if(top==MAX-1)
    return 1;
    else 
    return 0;
}

void display(){
    if(top == -1){
        printf("stack is empty\n");
        return;
    }
    printf("Stack elements:\n");
    for(int i = top; i >= 0; i--){
        printf("%d\n", stack[i]);
    }
}

int main(){
    push(10);
    printf("after pushing the element:10");
    push(20);
    printf("after pushing the element:20");
    display();
    pop();
    printf()
    display();
    return 0;
}