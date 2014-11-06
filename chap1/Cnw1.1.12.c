#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void main(){


	int ch,prev='\0';
	int inword=1;

	while( (ch=getchar()) !=EOF){
		inword=1;
		if(isspace(ch)) {
			inword=0;
			if(!(isspace(prev)))
				printf("\n");
		
		}
		if(inword){
			putchar(ch);
		}
		
		prev=ch;
	}

	
	
}
