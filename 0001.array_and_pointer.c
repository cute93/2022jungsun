#include<stdio.h>
int main(){
	int arr[] = {1,2,3,4,5};
	int *pa = arr;
	printf("Size of arr[] : %d\n", sizeof(arr));
	printf("Size of pa : %d\n", sizeof(pa));
	
	printf("arr[0] : %d\n", arr[0]);
	printf("pa[0] : %d\n", *pa);
	
	if(arr == pa){
		printf("Same Address..\n");
	}else{
		printf("Difference Address..\n");
	}
	
	printf("arr : %p : pa : %p\n", arr, pa);
	printf("Address arr : %p : Address pa : %p\n", &arr, &pa);
	
	if(&arr == &pa){
		printf("Same Address..\n");
	}else{
		printf("Difference Address..\n");
	}
	
	return 0;
}
