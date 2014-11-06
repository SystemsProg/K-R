#include<stdio.h>
#include<stdlib.h>

#define IN 1
#define OUT 0
void main(){

	int state,ch;
	state = OUT;

	while((ch=getchar()) !=EOF){
	
		if(isspace(ch)){
			if(state==IN){
				putchar('\n');
				state=OUT;
			}
		}
		
		else if(state==OUT){
			state=IN;
			putchar(ch);
		}
		else
			putchar(ch);
	}
	


}
