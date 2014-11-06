#include<stdio.h>
#include<stdlib.h>

void main(){

	char ch;
	int  count=0;
	
	while( (ch=getchar()) !=EOF){
		if(ch == '\n')	
			++count;
	}
	printf("\n count=%d \n",count);


}
