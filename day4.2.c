#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* top = NULL;

void push(int value)
{
    struct Node* newNode;

    newNode = (struct Node*) malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = top;

    top = newNode;
}

void pop()
{
    struct Node* temp;

    if(top == NULL)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        temp = top;
        printf("Popped: %d\n", temp->data);
        top = top->next;
        free(temp);
    }
}

void peek()
{
    if(top == NULL)
        printf("Stack empty\n");
    else
        printf("Top element: %d\n", top->data);
}

void display()
{
    struct Node* temp = top;

    while(temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    display();

    pop();

    peek();

    return 0;
}