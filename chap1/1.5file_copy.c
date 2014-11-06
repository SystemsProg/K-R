#include<stdio.h>
#include<stdlib.h>

void main(){
	
	int c;
	
	while((c=getchar()) != EOF)
		putchar(c);
	printf("\n");
	c=c==1? 1:0;
	printf("\n c=%d\n",c);
}
