#include<stdio.h>
#include<stdlib.h>

void main(){
	
	int pos=0,num=0,bits=0,value=0,prev=0,holder=0;
	int i=0;
	
	printf("\nEnter Number:");
	scanf("%d",&num);
	printf("\nEnter position:");
	scanf("%d",&pos);
	printf("\nEnter # bits:");
	scanf("%d",&bits);


	for(i=0;i<bits;i++){
	
		holder= 1<<(pos-i);
		value = prev ^ holder ;	
		prev=value;
	}

	/* Alternative:

		final_num= num^(((1<<n)-1) <<( p+n-1));
	*/
	
	printf("\nOriginal Number:%d",num);
	printf("\nPost Inversion:%d\n",(num ^ value));
	
	
}
