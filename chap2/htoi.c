#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include<string.h>
#include<ctype.h>

#define ARRSIZE 1000
int hextoint(char []);
int str_len(char[]);

int  main(){

	char num_arr[ARRSIZE];
	printf("\nEnter Number:");
	scanf("%s",num_arr);

	printf("\n Integer Number:%d\n",hextoint(num_arr));
}


int hextoint(char num_arr[]){

	int i,j=0,value=0;
	int len;

	len= str_len(num_arr);
	for(i=2;num_arr[i] !='\0';i++)
		num_arr[i]=toupper(num_arr[i]);
	
	for(i=len-1; i>=2;i--){
		
		if(num_arr[i] >= 'A' && num_arr[i]<='F')
			value =value+((num_arr[i] - 55) *(pow(16,j++)));
		else if(num_arr[i] >='0' && num_arr[i] <='9')
			value= value+((num_arr[i] -'0')* (pow(16,j++)));
		else{
			printf("Invalid Entry\n");
			exit(1);
		}

	}
	
	return value;
}


int str_len(char num_arr[]){

	int i;
	
	for(i=0;num_arr[i]!='\0';i++)
		;
	return i;
}

	
		
