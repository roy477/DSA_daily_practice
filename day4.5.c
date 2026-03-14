#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

int isEmpty()
{
    if(front == NULL)
        return 1;
    return 0;
}

int isFull()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    if(temp == NULL)
        return 1;
    free(temp);
    return 0;
}

void enqueue(int val)
{
    if(isFull())
    {
        printf("Queue Overflow\n");
        return;
    }

    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    if(newnode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    newnode->data = val;
    newnode->next = NULL;

    if(front == NULL)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}

void dequeue()
{
    if(isEmpty())
    {
        printf("Queue Underflow\n");
        return;
    }

    struct node *temp = front;
    printf("Deleted element: %d\n", front->data);

    front = front->next;
    free(temp);
}

void peek()
{
    if(isEmpty())
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Front element: %d\n", front->data);
}

void display()
{
    struct node *temp = front;

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("Queue elements:\n");
    display();

    peek();

    dequeue();

    printf("After Dequeue:\n");
    display();

    return 0;
}