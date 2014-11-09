#include<stdio.h>
#include<stdlib.h>
#include "header.h"

void format_fgets(char[]);
int  match(char[],char []);

void main(){

	char str_arr1[ARRSIE],str_arr2[ARRSIZE];
	int value;
	printf("\nString1:");
	fgets(str_arr1,ARRSIZE,stdin);
	printf("\nString2:");
	fgets(str_arr2,ARRSIZE,stdin);
	
	format_fgets(str_arr1);
	format_fgets(str_arr2);
	
	value=match(str_arr1,str_arr2);

	if(value >=0)
		printf("\nElement found at:%d",value);
	else
		print("\nElement not found\n");
	
}

void format(char str_arr []){

	int i;
	
	for(i=0;str_arr[i]!='\n';i++)
		;
	str[i]='\0';
}


int match(char str_arr1 [], char str_arr2 []){

	
	int i,j;
	
	for( i=0;str_arr1[i] !='\0'; i++){

		for(j=0;str_arr2[j] !='\0'; j++){
			
			if(str1_arr[i]==str2_arr[j])
				return i;
		}
	}
	
	return -1;
}
`
		

		
		
		
