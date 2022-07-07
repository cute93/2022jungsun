#include<stdio.h>
void printInt(int *p){
	printf("%d->", *p);
}
int main(){
	char str[] = "Hello, world!!";
	char* ps = str;
	
	printf("String : %s\n", str);
	printf("String : %s\n", ps);
	
	printf("1st char : %c\n", str[0]);
	printf("1st char : %c\n", *ps);
	printf("2nd char : %c\n", str[1]);
	printf("2nd char : %c\n", *(ps+1));
	
	printf("Size str : %d\n", sizeof(str));
	printf("Size str : %d\n", sizeof(ps));
	
	int l = sizeof(str);
	int pl = 0;
	while(*ps != '\0'){
		ps++;
		pl++;
	}
	printf("Length of Str : %d, %d\n", l, pl);
	
	ps = str;
	while(*ps != '\0'){
		printf("%c", *ps);
		ps+=1;
	}
	//...
	return 0;
}
