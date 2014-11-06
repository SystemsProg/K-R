#include<stdio.h>
#include<stdlib.h>

void main(){


	int digit_holders[10]={0};
	int ch;
	int i, white_space=0,other=0;

	while((ch=getchar())!=EOF){
		
		if(isspace(ch))
			white_space++;
		else if(isdigit(ch))
			digit_holders[ch-'0']++;
		else
			other++;
	}
	printf("\n White spaces=%d\n Other=%d\n",white_space,other);
	for(i=0;i<=9;i++)
		printf("\ndigit_holders[%d]=%d\n",i,digit_holders[i]);
}

