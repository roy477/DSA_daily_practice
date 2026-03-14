#include<stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

int isEmpty()
{
    if(front == -1 || front > rear)
        return 1;
    return 0;
}

int isFull()
{
    if(rear == MAX-1)
        return 1;
    return 0;
}

void enqueue(int val)
{
    if(isFull())
    {
        printf("Queue Overflow\n");
        return;
    }

    if(front == -1)
        front = 0;

    rear++;
    queue[rear] = val;
}

void dequeue()
{
    if(isEmpty())
    {
        printf("Queue Underflow\n");
        return;
    }

    printf("Deleted element: %d\n", queue[front]);
    front++;
}

void peek()
{
    if(isEmpty())
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Front element: %d\n", queue[front]);
}

void display()
{
    if(isEmpty())
    {
        printf("Queue is empty\n");
        return;
    }

    for(int i=front;i<=rear;i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
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