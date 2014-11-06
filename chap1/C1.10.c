#include<stdio.h>
#include<stdlib.h>

void main(){
	
	int ch;

	while((ch=getchar()) !=EOF){
		
		switch(ch){
			
			case '\t':
					printf("\\t");	
					break;
			case '\\':
					printf("\\\\");				
					break;
			case '\b':
					printf("\\b");				
					break;
			default:	
					putchar(ch);
					break;
		}
	}
	


}
