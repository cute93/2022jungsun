#include<stdio.h>
int main(){
	int a = 10;
	int* pa = &a;
	
	printf("Size of int : %d\n", sizeof(a));
	printf("Size of Pointer : %d\n", sizeof(pa));
	
	printf("Value of a : %d\n", a);
	printf("Value of pa : %d\n", *pa);
	
	printf("Address of a : %p\n", &a);
	printf("Address of pa : %p\n", pa);
	
	printf("Address of Address of pa : %p\n", &pa);
	return 0;
}
