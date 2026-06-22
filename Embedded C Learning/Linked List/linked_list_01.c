#include <stdio.h>
#include <stdlib.h>


struct node{
	int data;
	struct node *next;
};

int main(){
	struct node *head=malloc(sizeof(struct node));
	struct node *second=malloc(sizeof(struct node));
	struct node *third=malloc(sizeof(struct node));
	struct node *temp;
	temp=head;

	head->data=10;
	head->next=second;

	second->data=20;
	second->next=third;

	third->data=30;
	third->next=NULL;

	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");

	free(head);
	free(second);
	free(third);
	return 0;
}

