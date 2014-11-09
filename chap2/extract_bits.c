#include<stdio.h>
#include<stdlib.h>

int getbits(int,int,int);

void main(){
	
	int num,pos,bits,shifted_value;
	
	printf("\nEnter Number:");
	scanf("%d",&num);
	printf("Enter position:");
	scanf("%d",&pos);
	printf("Enter #of bits to extract:");
	scanf("%d",&bits);
	
	printf("Extracted bits:%d\n\n",getbits(num,pos,bits));
	
}


int getbits( num, pos,n){

	
	return( (num>>(pos-n+1)) & ( ~(~0 << n)));
}
