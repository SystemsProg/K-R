#include<stdio.h>
#include<stdlib.h>
#include "header.h"

void match_squeeze( char [], char []);

void main(){

	char str1[ARRSIZE],str2[ARRSIZE];

	printf("\n string1:");
	fgets(str1,ARRSIZE,stdin);
	printf("\n string2:");
	fgets(str2,ARRSIZE,stdin);
	format_fgets(str1);
	format_fgets(str2);
	
	match_squeeze(str1,str2);
	puts( str1);
}



void match_squeeze(char str1 [], char str2 []){

	int i,j,k=0;

	for(i=0i,k=0; str2[i] !='\0'; i++){

		k=0;
		for(j=0; str1[j]!='\0';j++){
			
			if(str1[j]!=str2[i])
				str1[k++]=str1[j];
		}
		str1[k]='\0';
		
	}

}
