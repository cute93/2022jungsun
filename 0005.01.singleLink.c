#include<stdio.h>
#include<stdlib.h>
typedef struct n_tag{
	int data;
	struct n_tag* next;
}Node;
Node* makeNode(int n);
void printNode(Node* node);
void printList(Node* s);
int get(Node* start, int pos);

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
void printList(Node* s){
	Node* temp = s;
	while(temp){
		printNode(temp);
		temp = temp->next;
	}
	printf("\n");
}
int get(Node* start, int pos){
	if(pos<0) return -1;
	int i;
	Node* temp;
	for(temp=start, i=0; i<pos && temp; i++, temp=temp->next);
	if(temp)
		return temp->data;
	else
		return -1;
}

int main(){
	int n, d, i, len;
	printf("리스트에 넣을 정수의 개수 : ");
	scanf("%d", &n);
	len = n;

	Node* start=NULL;
	Node* a;
	Node* t;
	for(i=0; i<n; i++){
		printf("정수 : ");
		scanf("%d", &d);
		a = makeNode(d);
		printNode(a);
		if(!start){
			start = a;
		}else{
			for(t=start; t->next; t=t->next);
			t->next = a;
			
		}
		    
		    
	}

	for(i=0; i<n; i++){
		printf("%d ", get(start, i));
	}

	printList(start);
	return 0;

}
