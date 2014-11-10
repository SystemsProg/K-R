#include<stdio.h>
#include<stdlib.h>

void main(){
	
        unsigned int digit,i=0,one_count=0;

	printf("\nEneter Digit:");
	scanf("%d",&digit);
	
	for(one_count=0;digit !=0; digit>>=1){
		
		if(digit & 01)
		   one_count++;
		
	}
	
	printf("\n# of 1's:%d\n",one_count);

	

}
