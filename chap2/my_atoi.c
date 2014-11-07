#include<stdio.h>
#include<stdlib.h>
#define ARRSIZE 1000

char str_arr[ARRSIZE];
long int asciitoint();

void main(){

	extern char str_arr[];
	int value=0;

	printf("\natoi Enter Number:");
	scanf("%s",str_arr);
	printf("\nInteger Number: %ld\n",asciitoint());
}


long int asciitoint(){

	extern char str_arr[];
	long int i=0,value=0;
	

	while((str_arr[i]!='\0') && (i<ARRSIZE)){
		if((str_arr[i]>='0' && str_arr[i]<='9')){

			(str_arr[i]>='0' && str_arr[i]<='9');
			value=10*value+(str_arr[i++]-'0');
		}
		else{
			printf("Invalid Entry\n");
			exit(1);
		}
			
	}
	return value;
}
