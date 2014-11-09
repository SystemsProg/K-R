#include<stdio.h>
#include<stdlib.h>
#include "header.h"

int  match(char[],char []);

void main(){

	char str_arr1[ARRSIZE],str_arr2[ARRSIZE];
	int value;
	printf("\nString1:");
	fgets(str_arr1,ARRSIZE,stdin);
	printf("\nString2:");
	fgets(str_arr2,ARRSIZE,stdin);
	
	format_fgets(str_arr1); 		// format_fgets definition in : functions.c
	format_fgets(str_arr2);
	
	value=match(str_arr1,str_arr2);

	if(value >=0)
		printf("\nElement found at:%d\n",value+1);
	else
		printf("\nElement not found\n");
	
}


/***** END OF MAIN*****/

int match(char str_arr1 [], char str_arr2 []){

	
	int i,j;
	
	for( i=0;str_arr2[i] !='\0'; i++){

		for(j=0;str_arr1[j] !='\0'; j++){
			
			if(str_arr2[i]==str_arr1[j])
				return j;
		}
	}
	
	return -1;
}

		

		
		
		
