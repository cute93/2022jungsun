#include<stdio.h>
typedef long long int64;
typedef char Character;

typedef struct tag_person{
	Character name[16];
	int age;
}Person;
int main(){
	Person a;
	Person *pa = &a;
	printf("Size of Person : %d\n", sizeof(a));
	strcpy(pa->name, "Joon!");
	a.age = 30;
	printf("%s(%d)\n", pa->name, pa->age);
}

