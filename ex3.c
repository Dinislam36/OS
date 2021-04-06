#include <stdio.h>
#include <stdlib.h>

struct Node // node in linked list
{
	int elem; // element in node
	struct Node *nextNode; // link to next node
};

struct Linked_list // linked list structure
{
	int size;
	struct Node *head;
};

void insert_node(struct Linked_list *l, int data, int position){
	if(position == l->size){
		struct Node *n;
		n = malloc(sizeof(struct Node));
		n = l->head;
		for(int i = 0; i < l->size - 1 ; i++){
			n = n->nextNode;
		}
		struct Node *newNode = malloc(sizeof(struct Node));
		newNode->elem = data;
		newNode->nextNode = NULL;
		n->nextNode = newNode;
		l->size++;
	} else if(position > l->size){
		printf("Out of bound\n");
	} else if(position == 0){
		struct Node *newNode = malloc(sizeof(struct Node));
		newNode->elem = data;
		newNode->nextNode = l->head;
		l->head = newNode;
		l->size++;
	} else if(position > 0){
		struct Node *n;
		n = malloc(sizeof(struct Node));
		n = l->head;
		for(int i = 0; i < position-1; i++){
			n = n->nextNode;
		}
		struct Node *newNode = malloc(sizeof(struct Node));
		newNode->elem = data;
		newNode->nextNode = n->nextNode;
		n->nextNode = newNode;
		l->size++;
	}
}

void delete_node(struct Linked_list *l, int position){
	if(position >= l->size || position < 0){
		printf("Out of bound\n");
	} else if(position == 0){
		l->head = l->head->nextNode;
		l->size--;
	} else{
		struct Node *n = malloc(sizeof(struct Node));
		n = l->head;
		for(int i = 0; i < position-1; i++){
			n = n->nextNode;
		}
		n->nextNode = n->nextNode->nextNode;
		l->size--;
	}
}

void print_list(struct Linked_list *l){
	struct Node *n = l->head;
	printf("%d ", n->elem);
	for(int i = 0; i < l->size-1; i++){
		n = n->nextNode;
		printf("%d ", n->elem);
	}
}

int main(){
	struct Node *head = malloc(sizeof(struct Node)); 
	struct Linked_list l = {1,head};
	l.head->elem = 1;
	insert_node(&l,3,1);
	insert_node(&l,5,2);
	insert_node(&l,2,0);
	print_list(&l);
	printf("\n");
	delete_node(&l,0);
	print_list(&l);
}