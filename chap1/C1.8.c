#include<stdio.h>
#include<stdlib.h>

void main(){
	
	int space=0,tab=0,newline=0;
	int ch;

	while((ch=getchar()) !=EOF){
		
		switch(ch){
			
			case '\n':
					newline++;
					break;
			case '\t':
					tab++;	
					break;
			case ' ':
					space++;	
					break;
			default:
					break;
		}
	}
	
	printf("\nspace=%d\ntab=%d\nnewline=%d\n\n",space,tab,newline);


}
