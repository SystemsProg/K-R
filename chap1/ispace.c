#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ARRSIZE 1000
#include "headers.h"


void main(){

	int len=0,i=0;
	char str_arr[ARRSIZE];
	
	while( (len =(getln(str_arr,ARRSIZE))) >0){
		
			while(str_arr[i] !='\n')
				i++;
			i--;

			while(i>=0 && (str_arr[i]==' '||str_arr[i]=='\t'))
					i--;
			
			if(i>=0){
				
					str_arr[++i]='\n';
					str_arr[++i]='\0';
			
			}
  			printf("1st while loop");
	}
	puts(str_arr);

}


