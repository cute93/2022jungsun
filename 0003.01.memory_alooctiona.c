#include<stdio.h>

int* dynamicArray(int size);

int* dynamicArray(int size){
	int* rtnAddress;
	rtnAddress = (int*)malloc(sizeof(int)*size);
	return rtnAddress;
}

int main(){
	int n;
	int* arr;
	int i;
	printf("����� ������ ���� : ");
	scanf("%d", &n);
	arr = dynamicArray(n);
	for(i=0; i<n; i++){
		printf("%d �ڷ� �Է� : ", i+1);
		scanf("%d", (arr+i));
	}
	for(i=0; i<n; i++){
		printf("%d->", arr[i]);
	}
	printf("\b\b     \n");
	
	return 0;
}

