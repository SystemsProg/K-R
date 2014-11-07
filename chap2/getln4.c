#include<stdio.h>
#include<stdlib.h>
#define ARRSIZE 1000
void main(){
	
	int ch;
	int limit=0;
	char str_arr[ARRSIZE];
	int flag=0;


	while( limit-1 < ARRSIZE){
		
		ch=getchar();
		
		switch(ch){
				case '\n': 
						flag=1;
						break;
				
				
				case EOF: flag=1;
					  break;
				
				default:
					str_arr[limit++]=ch;
		}
		
		if(flag==1)
		break;
	}	
}
