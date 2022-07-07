#include<stdio.h>
#include<time.h>
#define filename "input.txt"
#define MAX 100

void randomize(void);


void randomize(){
	srand(time(NULL));
}
int main(){
	FILE* outf = fopen(filename, "w");
	randomize();
	fprintf(outf, "%d\n", MAX);
	int i;
	int max;
	if(MAX*MAX<30000)
		max = MAX*MAX;
	else
		max = 30000;
		
	for(i=0; i<MAX; i++){
		fprintf(outf, "%d\n", rand()%max);
	}
	fclose(outf);
	return 0;
}
