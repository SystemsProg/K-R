#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"extr_headers.h"

int getln(void);

void main(){

	int len=0;
	extern char str_arr[];
	
	while( (len =(getln())) >0){
		if(len >=MAXLEN){
			printf("\n len=%d\n",len);
			puts(str_arr);
		}
	}

}

/* Implementation through headers.h */
/*

int getln(void){
		
	int limit=0;
	int ch;
//	extern char str_arr[];

	while( ((ch=getchar())!=EOF) && (limit<(ARRSIZE-1)) && (ch!='\n'))
		str_arr[limit++]=ch;
	if(ch=='\n')
		str_arr[limit++]='\n';
	str_arr[limit]='\0';
	return(limit);
}
*/		 
