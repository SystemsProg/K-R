#include<stdio.h>
#include<stdlib.h>

int random_nu(void);
void srandom ( unsigned int);
unsigned long int next=1;
void main(){
	
	printf("\n Random Number Generated:%d\n",random_nu());
}


int random_nu(void){

	int next;
	srandom(20);
	next = next *1103515245 + 12345;
	return (unsigned int)(next/65536)%32768;
}

void srandom(unsigned int seed){
	
	next=seed;
}
