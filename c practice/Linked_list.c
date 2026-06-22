#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *createNode(int value){
	struct node *newNode=malloc(sizeof(struct node));

	newNode->data=value;
	newNode->next=NULL;

	return newNode;
}

void insertAtend(struct node **head,int value){
	struct node *newNode=createNode(value);
	if(*head==NULL){
		*head=newNode;
		return ;
	}
	struct node *temp = *head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newNode;
}

int main(){
	struct node *head = NULL;
        struct node *temp;

	insertAtend(&head,10);
	insertAtend(&head,20);
	insertAtend(&head,30);
	temp=head;

	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");

	free(head);
	return 0;
}
