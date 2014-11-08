#include<stdio.h>
#include<stdlib.h>

#define ARRSIZE 1000

void str_squeeze(char []);

void main(){

	char str_arr[ARRSIZE];
	
	printf("\nstring1:");
	fgets(str_arr,ARRSIZE,stdin);

	str_squeeze(str_arr);
	printf("Modified string:%s",str_arr);

}


void str_squeeze(char str_arr []){

	int i=0,j=0;
	
	for(j=0;str_arr[j]!='\0';j++){

		while(str_arr[j]=='c'){
			j++;
		}
		str_arr[i++]=str_arr[j];
	}

	str_arr[i]='\0';
}
	


