#include<stdio.h>
#include<stdlib.h>

// define data type
typedef struct n_tag{
	struct n_tag* prev;
	int data;
	struct n_tag* next;
}Node;
typedef struct l_tag{
	Node* head;
	Node* tail;
	int len;
}List;

// function declarations...
Node* makeNode(int d);
void printNode(Node* n);
List* makeList(void);
void push(List* list, int d);
void printList(List* list);
int pop(List* list);
int delete(List* list);
// function definitions...
int delete(List* list){
	if(list->len == 0){
		printf("Empty List!!\n");
		return -1;
	}
	Node* temp = list->head;
	int rtn = temp->data;
	list->head=temp->next;
	if(list->head)
		list->head->prev = NULL;
	else
		list->tail = NULL;
	free(temp);
	list->len--;
	return rtn;
}
int pop(List* list){
	if(list->len == 0){
		printf("Empty List!!\n");
		return -1;
	}
	Node* temp = list->tail;
	int rtn = temp->data;
	list->tail = temp->prev;
	if(list->tail)
		list->tail->next = NULL;
	else
		list->head = NULL;
	free(temp);
	list->len--;
	return rtn;
}
void printList(List* list){
	Node* temp;
	if(!list->head) return;
	for(temp=list->head; temp!=list->tail->next;temp=temp->next)
		printNode(temp);
	printf("\n");
}
void push(List* list, int d){
	Node* newNode = makeNode(d);
	if(list->head == NULL){
		list->head = newNode;
		list->tail = newNode;
		list->len++;
		return;
	}
	newNode->prev = list->tail;
	list->tail->next = newNode;
	list->tail = newNode;
	list->len++;
	
}
List* makeList(){
	List* newList = (List*)malloc(sizeof(List));
	newList->head = NULL;
	newList->tail = NULL;
	newList->len = 0;
}
Node* makeNode(int d){
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = d;
	newNode->prev = NULL;
	newNode->next = NULL;
	return newNode;
}
void printNode(Node* n){
	if(n->prev) printf("<-");
	printf("[%d]", n->data);
	if(n->next) printf("->");
}
int main(){
	List* Queue = makeList();
	srand(time(NULL));
	int i;
	for(i=0; i<5; i++)
	    push(Queue, rand()%100);
	printList(Queue);
	printf("Pop : %d\n", delete(Queue));
	printList(Queue);
	printf("Pop : %d\n", delete(Queue));
	printList(Queue);
	printf("Pop : %d\n", delete(Queue));
	printList(Queue);
	printf("Pop : %d\n", delete(Queue));
	printList(Queue);
	printf("Pop : %d\n", delete(Queue));
	printList(Queue);
	printf("Pop : %d\n", delete(Queue));
	printList(Queue);
	
	return 0;
}
