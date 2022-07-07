#include<stdio.h>
struct A{
	char name[80];
	int age;
};

int main(){
	struct A st01;
	printf("Size of st01 : %d\n", sizeof(st01));
	
	strcpy(st01.name, "hello");
	st01.age = 15;
	
	printf("Name : %s\n", st01.name);
	printf("Age : %d\n", st01.age);
	
	struct A* pst = &st01;
	printf("Size of pst : %d\n", sizeof(pst));
	printf("Name : %s\n", pst->name);
	printf("Age : %d\n", pst->age);
	
	
	
	return 0;
}
