#include<stdio.h>
#include<stdlib.h>
#include "header.h"

void str_concat(char [],char []);
int str_len(char []);

void main(){

	char str_arr1[ARRSIZE],str_arr2[ARRSIZE];

	printf("\nString1:");
	fgets(str_arr1,ARRSIZE,stdin);		/* substitute for gets */
	/*gets(str_arr1);			depricated in C, no longer in use altough supported*/
	printf("String2:");
	fgets(str_arr2,ARRSIZE,stdin);
	/*gets(str_arr2);			the above comment applies here too.*/
	
	str_concat(str_arr1,str_arr2);
	
	printf("Concatenated string:%s\n\n",str_arr1);	
}



void str_concat(char str_arr1[], char str_arr2[]){

	int i=0, len=0,j;
	
	len=str_len(str_arr1);
	j=len-1;

	for(i=0;( str_arr2[i]!='\0'); i++)
		str_arr1[j++]=str_arr2[i];
	
	str_arr1[j-1]='\0';

}



int str_len(char str_arr1[]){

	int i;
	
	for(i=0; str_arr1[i]!='\0';i++)
		;
	return i;
}
