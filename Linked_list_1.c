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

int main(){
	struct node *second;
	struct node *third;
	struct node *head;
	struct node *temp;


	head=createNode(10);
	temp=head;
	second=createNode(20);
	third=createNode(30);
	
	head->next=second;	
	second->next=third;
	third->next=NULL;
	
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");

	free(second);
	free(third);
	free(head);

	return 0;
}
