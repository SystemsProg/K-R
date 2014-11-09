#include<stdio.h>
#include<stdlib.h>
#include "header.h"

void lowchar( char []);

void main(){

	char str_arr[ARRSIZE];

	printf("\nString:");
	fgets(str_arr,ARRSIZE,stdin);
	format_fgets(str_arr);
	
	lowchar(str_arr);
	printf("Post modification:%s\n\n",str_arr);
}



void lowchar(char str_arr []){


	int i=0;

	for(i=0;str_arr[i]!='\0';i++)
	
		(str_arr[i] >=65 && str_arr[i] <=90) ? (str_arr[i]+32) :str_arr[i] ;

		
}
