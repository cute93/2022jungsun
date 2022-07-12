#include<stdio.h>
#include<stdlib.h>

typedef struct n_tag{
	int data;
	struct n_tag* next;
}Node;

Node* head;
int len = 0;

Node* makeNode(int n);
void printList(void);
int get(int pos);
void insert(int data);

Node* makeNode(int n){
	Node* rtnAddress = (Node*)malloc(sizeof(Node));
	rtnAddress->data = n;
	rtnAddress->next = NULL;
}
void printNode(Node* node){
	if(!node) return;
	printf("[%d]", node->data);
	if(node->next) printf("->");
}
void printList(){
	Node* temp = head;
	while(temp){
		printNode(temp);
		temp = temp->next;
	}
	printf("\n");
}
int get(int pos){
	if(pos<0) return -1;
	int i;
	Node* temp;
	for(temp=head, i=0; i<pos && temp; i++, temp=temp->next);
	if(temp)
		return temp->data;
	else
		return -1;
}
void insert(int data){
	Node* intemp = makeNode(data);
	if(!head){
		head = intemp;
		return;
	}
	Node* temp = head;
	while(temp->next) temp=temp->next;
	temp->next = intemp;
}
int main(){
	insert(10);
	insert(20);
	insert(40);
	insert(50);
	printList();
	return 0;

}
