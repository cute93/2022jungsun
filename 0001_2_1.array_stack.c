#include<stdio.h>
#define MAX 10
int Stack[MAX];
int top = 0;

// 함수선언
void push(int n);
int pop(void);
void printStack(void);

// 함수정의 
void push(int n){
	if(top>10){
		printf("Stack Full!!\n");
		return;
	}
	Stack[top++] = n;
}
int pop(void){
	if(top<0){
		printf("Stack Empty!!\n");
	}
	return Stack[--top];
}
void printStack(void){
	int i;
	printf("|");
	for(i=0;i<top;i++) printf("%d|", Stack[i]);
	printf("\n");
}
int main(){
	int n;
	int i;
	for(i=0; i<20; i++){
		push(i*3);
	}
	printf("Stack has %d items..\n", top);
	printStack();
	printf("%d\n",pop());
	printf("%d\n",pop());
	printf("%d\n",pop());
	
	return 0;
}
