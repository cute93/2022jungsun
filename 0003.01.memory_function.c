#include<stdio.h>

int swap(int a, int b);
int a(void);
int b(void);

int a(){
	int n;
	printf("Adrees of n in a() : %p\n", &n);
	b();
	return 0;
}
int b(){
	int n;
	printf("Adrees of n in b() : %p\n", &n);
	return 0;
}
int swap(int a, int b){
	int temp = a;
	a = b;
	b = temp;
}
int main(){
	int n;
	printf("Adrees of n in main() : %p\n", &n);
	a();
	b();
	int n1, n2;
	n1=10;
	n2=20;
	printf("A: %d, B: %d\n", n1, n2);
	swap(n1, n2);
	printf("A: %d, B: %d\n", n1, n2);
	return 0;
}

