#include<stdio.h>
#define MAX 10
int Queue[MAX];
int rear = -1;
int front = -1;

// function declarations...
void insert(int n);
int delete(void);
void printQueue(void);

// function definitions...
void insert(int n){
	Queue[++front] = n;
}
int delete(void){
	return Queue[++rear];
}
void printQueue(void){
	int i;
	for(i=rear+1; i<=front;i++){
		printf("%d->", Queue[i]);
	}
	printf("\b\b    \n");
}
int main(){
	srand(time(NULL));
	int n=15;
	while(n--)
		insert(rand()%100);
	printf("Queue has %d items..\n", front-rear);
	printQueue();
	int q;
	n=17;
	while(n--){
		q = delete();
		printf("Use Queue data : %d, and Queue has %d items..\n", q, front-rear);
	}
	printQueue();
	return 0;
}
