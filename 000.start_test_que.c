/***
000. 파일 입력을 통해 n개의 숫자 중 
     소수만을 가진 배열을 만들고,
	 소수들을 작은수에서 큰수로 정렬하는 프로그램을 작성하시오. 
	 입력형식=========
	 3
	 9
	 3
	 7
	 출력형식========
	 2
	 3 7
	 이프로그램 작성이유는 파일입출력, 함수의 선언, 정의, 사용의 분리
	 가변크기 배열의 사용, 정렬알고리즘을 알아보기 위함임. 
***/
#include<stdio.h>
#define filename "input.txt"
#define true 1
#define false 0

int isPrime(int n);
void SWAP(int *a, int *b);
 
int main(){
	FILE* fin;
	// Todo..
	
	return 0;
} 
