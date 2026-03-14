#include <stdio.h>
#include <stdlib.h>

/* Node structure */
struct Node
{
    int data;
    struct Node* next;
};

/* Front and Rear pointers */
struct Node* front = NULL;
struct Node* rear = NULL;


/* Check if queue is empty */
int isEmpty()
{
    if(front == NULL)
        return 1;
    else
        return 0;
}


/* Check if queue is full */
int isFull()
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));

    if(temp == NULL)
        return 1;
    else
    {
        free(temp);
        return 0;
    }
}


/* Enqueue: insert element at rear */
void enqueue(int value)
{
    if(isFull())
    {
        printf("Queue Overflow\n");
        return;
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = NULL;

    if(front == NULL)
    {
        front = rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }

    printf("%d inserted\n", value);
}


/* Dequeue: remove element from front */
void dequeue()
{
    if(isEmpty())
    {
        printf("Queue Underflow\n");
        return;
    }

    struct Node* temp = front;

    printf("%d removed\n", front->data);

    front = front->next;

    if(front == NULL)
        rear = NULL;

    free(temp);
}


/* Peek: show front element */
void peek()
{
    if(isEmpty())
        printf("Queue is empty\n");
    else
        printf("Front element: %d\n", front->data);
}


/* Display queue */
void display()
{
    if(isEmpty())
    {
        printf("Queue is empty\n");
        return;
    }

    struct Node* temp = front;

    printf("Queue elements: ");

    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}


/* Main function */
int main()
{
    int choice, value;

    while(1)
    {
        printf("\n1 Enqueue");
        printf("\n2 Dequeue");
        printf("\n3 Peek");
        printf("\n4 isEmpty");
        printf("\n5 isFull");
        printf("\n6 Display");
        printf("\n7 Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                peek();
                break;

            case 4:
                if(isEmpty())
                    printf("Queue is Empty\n");
                else
                    printf("Queue is Not Empty\n");
                break;

            case 5:
                if(isFull())
                    printf("Queue is Full\n");
                else
                    printf("Queue is Not Full\n");
                break;

            case 6:
                display();
                break;

            case 7:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}