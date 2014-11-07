#include<stdio.h>
#include<stdlib.h>
#define ARRSIZE 1000

void tocaps(char[]);

void main(){

	char str_arr[ARRSIZE];
	printf("\nString:");
	scanf("%s",str_arr);
	
	tocaps(str_arr);
	puts(str_arr);
	
}


void tocaps(char str_arr []){
	
	
	int i,ch;

	for(i=0;(str_arr[i] !='\0') && (i<ARRSIZE); i++){

		ch=str_arr[i];
		
		if(ch>=97 && ch <=122)
			str_arr[i]= ch -32;
	}
}
								
