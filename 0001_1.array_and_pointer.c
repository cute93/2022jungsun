#include<stdio.h>
void printInt(int *p){
	printf("%d->", *p);
}
int main(){
	int arr[] = {1,2,3,4,5};
	int *pa = arr;
	int i;
	int len = sizeof(arr)/sizeof(int);
	for(i=0;i<len;i++){
		printf("%d->", arr[i]);
	}
	printf("\b\b   \n");
	for(i=0;i<len;i++){
		printf("%d->", *(pa+i));
	}
	printf("\b\b   \n");
	for(i=0;i<len;i++){
		printf("%d->", pa[i]);
	}
	printf("\b\b   \n");
	for(i=0;i<len;i++){
		printf("%d->", *(arr+i));
	}
	printf("\b\b   \n");
	for(i=0;i<len;i++){
		printf("%d->", *(i+arr));
	}
	printf("\b\b   \n");
	for(i=0;i<len;i++){
		printf("%d->", i[arr]);
	}
	printf("\b\b   \n");
	for(i=0;i<len;i++){
		printf("%d->", *(i+pa));
	}
	printf("\b\b   \n");
	for(i=0;i<len;i++){
		printf("%d->", i[pa]);
	}
	printf("\b\b   \n");
	
	pa = 100;
	//arr = 100;
	return 0;
}
