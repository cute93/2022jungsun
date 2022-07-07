/***
000. ���� �Է��� ���� n���� ���� �� 
     �Ҽ����� ���� �迭�� �����,
	 �Ҽ����� ���������� ū���� �����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
	 �Է�����=========
	 3
	 9
	 3
	 7
	 �������========
	 2
	 3 7
	 �����α׷� �ۼ������� 
	 ���������, 
	 �Լ��� ����, ����, ����� �и�
	 ����ũ�� �迭�� ���, 
	 ���ľ˰����� �˾ƺ��� ������. 
***/
#include<stdio.h>
#define filename "input.txt"
#define true 1
#define false 0

int isPrime(int n);
void SWAP(int *a, int *b);


int isPrime(int n){
	if(n<2)
		return false;
	if(n==2)
		return true;
	int i;
	for(i=2; i<n/2+1; i++)
		if(!(n%i)) return false;
	return true;
}
void SWAP(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	FILE* fin;
	fin = fopen(filename, "r");
	int d;
	fscanf(fin, "%d", &d);
	int num[d];
	int i;
	for(i=0; i<d; i++){
		fscanf(fin, "%d", num+i);
	}
	close(fin);
	int prime[d];
	int j=0;
	for(i=0;i<d; i++){
		if(isPrime(num[i])){
			//printf("%d\n", j);
			prime[j++] = num[i];
		}
	}
	
	int len = j;
	for(i=0; i<len-1;i++){
		for(j=i; j<len; j++){
			if(prime[i] > prime[j]) SWAP(prime+i, prime+j);
		}
	}
	for(i=0; i<len; i++)
		printf("%d ", prime[i]);
	printf("\n");
	printf("%d - %d = %d\n",d, len, d-len);
	return 0;
} 
