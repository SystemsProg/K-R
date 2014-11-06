#include<stdio.h>
#include<stdlib.h>
#include "extr_headers.h"
#define SPACES 8

void replace(void);

void main(){

	int line=0;
	while((line=getln())>0)
		replace();
}


void replace(void){

	extern char str_arr[];
	char replace_arr[ARRSIZE];
	int i=0,j=0,place=0;
	
	for(i=0;str_arr[i] !='\0'; i++){

		if(str_arr[i]!='\t')
			replace_arr[j++]=str_arr[i];
		
		else{
			place=j;
			while(j<(place+SPACES))
				replace_arr[j++]=' ';
			
		}
	}

	replace_arr[j]='\0';
	puts(replace_arr);
}
			
