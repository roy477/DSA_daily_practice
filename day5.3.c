
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* append(Node* head, int value) {
    Node* node = malloc(sizeof(Node));
    node->data = value;
    node->next = NULL;
    if (!head) return node;
    Node* p = head;
    while (p->next) p = p->next;
    p->next = node;
    return head;
}

void printList(Node* head) {
    
    while (head) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void bubbleSortList(Node* head) {
    if (!head) return;
    int swapped;
    Node *p, *q;
    do {
        swapped = 0;
        p = head;
        while (p->next) {
            q = p->next;
            if (p->data > q->data) {
                int tmp = p->data;
                p->data = q->data;
                q->data = tmp;
                swapped = 1;
            }
            p = p->next;
        }
    } while (swapped);
}

int main(void) {
    int arr[] = {25, 12, 31, 23, 52, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    Node* head = NULL;
    for (int i = 0; i < n; i++) {
        head = append(head, arr[i]);
    }

    printf("Original linked list: ");
    printList(head);

    bubbleSortList(head);

    printf("Sorted linked list: ");
    printList(head);

    // free memory
    Node* t;
    while (head) {
        t = head->next;
        free(head);
        head = t;
    }
    return 0;
}