/*
Oscar Flores
CPTR 131
Spring 2015
Lab 2
*/
#include <stdio.h>
#include <stdlib.h>
#define EMPTY NULL				//did this for more convenience, learned about structs with the word empty instead of null

struct queue{
	int items;
	struct queue* next;
	struct queue* prev;
};


struct queue* head;				//did this so that i could access the head in any function below 

struct queue* new_item(int x){
	struct queue* new = (struct queue*)malloc(sizeof(struct queue));
	new->items = x;
	new->prev = EMPTY;
	new->next = EMPTY;
	return new;
}

void insert_backdoor(int x){
	struct queue* temp = head;
	struct queue* new = new_item(x);
	if(head == EMPTY){
		head = new;
		return;
	}
	while(temp->next != EMPTY) temp = temp->next;
	temp->next = new;
	new->prev = temp;
}

void Print(){
	struct queue* temp = head;
	while(temp != EMPTY){
		printf("%d ", temp->items);
		temp = temp->next;
	}
	printf("\n");
}

int main(){								//have to put tests here, they won't run in a different file
	head = NULL;
	insert_backdoor(2); Print();
	insert_backdoor(3); Print();
	insert_backdoor(17); Print();
	
	
	
}






