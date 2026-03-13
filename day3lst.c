#include <stdlib.h>
#include<stdio.h>

struct Node{
 int data;
 struct Node *next;
};

struct Node*creatNode(int val){
    struct Node*newNode=(struct Node *)malloc(sizeof(struct Node));
    newNode->data=val;
    newNode->next=NULL;
    return newNode;
}
struct Node*creatStart(struct Node* head,int val){
    struct Node* newNode=creatNode(val);
    if(head==NULL)return newNode;
    newNode->next=head;
    head=newNode;
    return newNode;
}

// to display the ll we use

void displayList(struct Node*head){
    struct Node*temp=head;
    while(temp!=NULL){
        printf("%d--->",temp->data);
        temp=temp->next;

    }
    printf("End\n");
}
int main(){
    struct Node*head=NULL;
    head=creatStart(head,75);
    head=creatStart(head,65);
    head=creatStart(head,54);
    head=creatStart(head,35);
    displayList(head);
    return 0;
}