#include<stdio.h>
#include<stdlib.h>
#define ARRSIZE 1000
#include <math.h>
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
	
		
	for(i=len-1; i>=2;i--){
		
		if(num_arr[i] >= 'A' && num_arr[i]<='F')
			value =value+((num_arr[i] - 55) *(pow(16,j++)));
		else
			value= value+((num_arr[i] -'0')* (pow(16,j++)));

	}
	
	return value;
}


int str_len(char num_arr[]){

	int i;
	
	for(i=0;num_arr[i]!='\0';i++)
		;
	return i;
}

	
		
