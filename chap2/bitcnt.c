#include<stdio.h>
#include<stdlib.h>

void main(){
	
        unsigned int digit,i=0,one_count=0;

	printf("\nEneter Digit:");
	scanf("%d",&digit);
	
	while(digit){
		
		if(digit &1)
		   one_count++;
		digit>>=1;
	}
	
	printf("\n# of 1's:%d\n",one_count);

	

}
