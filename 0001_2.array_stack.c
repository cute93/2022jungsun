#include<stdio.h>
#define MAX 10
int Stack[MAX];
int top = 0;

int main(){
	int n;
	printf("Stack has %d items..\n", top);
	Stack[top++] = 10;
	printf("Stack has %d items..\n", top);
	Stack[top++] = 20;
	printf("Stack has %d items..\n", top);
	Stack[top++] = 30;
	printf("Stack has %d items..\n", top);
	n = Stack[--top];
	printf("Pop data : %d\n", n);
	n = Stack[--top];
	printf("Pop data : %d\n", n);
	Stack[top++] = 40;
	printf("Stack has %d items..\n", top);
	Stack[top++] = 50;
	printf("Stack has %d items..\n", top);
	n = Stack[--top];
	printf("Pop data : %d\n", n);
	return 0;
}
