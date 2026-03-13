#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node* createNode(int val){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}

// Insert at beginning
struct Node* createStart(struct Node* head,int val){
    struct Node* newNode = createNode(val);
    newNode->next = head;
    return newNode;
}

// Insert at end
struct Node* createEnd(struct Node* head,int val){
    struct Node* newNode = createNode(val);

    if(head == NULL)
        return newNode;

    struct Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
    return head;
}

// Delete first element
struct Node* deleteFirst(struct Node* head){
    if(head == NULL){
        printf("List Empty\n");
        return NULL;
    }

    struct Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

// Delete last element
struct Node* deleteLast(struct Node* head){
    if(head == NULL){
        printf("List Empty\n");
        return NULL;
    }

    if(head->next == NULL){
        free(head);
        return NULL;
    }

    struct Node* temp = head;

    while(temp->next->next != NULL){
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;

    return head;
}

// Delete middle element
struct Node* deleteMiddle(struct Node* head){
    if(head == NULL || head->next == NULL){
        free(head);
        return NULL;
    }

    struct Node *slow = head;
    struct Node *fast = head;
    struct Node *prev = NULL;

    while(fast != NULL && fast->next != NULL){
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    prev->next = slow->next;
    free(slow);

    return head;
}

// Delete next to middle
struct Node* deleteNextToMiddle(struct Node* head){
    if(head == NULL || head->next == NULL || head->next->next == NULL)
        return head;

    struct Node *slow = head;
    struct Node *fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }

    struct Node* temp = slow->next;

    if(temp != NULL){
        slow->next = temp->next;
        free(temp);
    }

    return head;
}

// Display list
void displayList(struct Node* head){
    struct Node* temp = head;

    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main(){

    struct Node* head = NULL;

    head = createStart(head,75);
    head = createStart(head,65);
    head = createStart(head,54);
    head = createStart(head,35);

    head = createEnd(head,100);
    head = createEnd(head,120);

    printf("Original List:\n");
    displayList(head);

    head = deleteFirst(head);
    printf("After deleting first:\n");
    displayList(head);

    head = deleteLast(head);
    printf("After deleting last:\n");
    displayList(head);

    head = deleteMiddle(head);
    printf("After deleting middle:\n");
    displayList(head);

    head = deleteNextToMiddle(head);
    printf("After deleting next to middle:\n");
    displayList(head);

    return 0;
}