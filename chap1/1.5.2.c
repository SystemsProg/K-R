/***** Prog to count char's*****/


#include<stdio.h>
#include<stdlib.h>

void main(){

	int  count;
	
	for(count=0; ((getchar()) !=EOF); count++)
		;
	printf("\n count= %d \n",count);
}
