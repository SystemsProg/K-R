#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ARRSIZE 1000
#include "headers.h"


void main(){

	int len=0,i;
	char str_arr[ARRSIZE];
	
	while( (len =(getln(str_arr,ARRSIZE))) >0){
		if(isspace(str_arr[0]) && (str_arr[1]=='\0'))
			;
		else{
			for(i=len-1;i>=0;i--)
				putchar(str_arr[i]);
		}
	
	}

}


