#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ARRSIZE 1000


void main(){

	int ch;
	int current_line=0,longest_line=0;
	int curr_ptr=0,equal_ptr=0;
	char long_line[ARRSIZE],curr_line[ARRSIZE],equal_line[ARRSIZE];
	

	
	while((ch=getchar())!=EOF){
	
		if(ch!='\n'){
				current_line++;
				curr_line[curr_ptr++]=ch;
		}
		
		else{
				if(current_line > longest_line){
					longest_line=current_line;
					curr_line[curr_ptr]='\0';
					strcpy(long_line,curr_line);
				}
				else if(current_line == longest_line){
					strcpy(equal_line,curr_line);
					equal_ptr=curr_ptr;
				}
				else
					;
				
				curr_ptr=0;
				current_line=0;
		}

	}

	if(equal_ptr==longest_line){
		printf("Longest Lines:--\n");
		puts(long_line);
		puts(equal_line);
	}
	else{
		printf("\nLongest Line:");
		puts(long_line);
	}
}
