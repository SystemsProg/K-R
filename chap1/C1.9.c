#include<stdio.h>
#include<stdlib.h>

void main(){

	int ch,prev;

	while((ch= getchar()) !=EOF){
	
		if(!(((ch==' ') |(ch=='\t')) && ((prev==' ')| (prev=='\t')))){
			prev=ch;
			putchar(ch);
		}
	}
			
}
