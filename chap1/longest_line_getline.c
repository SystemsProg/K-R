#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ARRSIZE 10

int getlne( char [], int);

void main(){

	int curr_line=0,longest_line=0;
	char currl[ARRSIZE],longl[ARRSIZE];

	while((curr_line=getlne(currl,ARRSIZE))>0){
		printf("\n len:%d\nline:%s\n",curr_line,currl);
		if(curr_line > longest_line){
			longest_line=curr_line;
			strcpy(longl,currl);
		}
	}
	
      if(longest_line>0)
	puts(longl);

}


int getlne( char currl[], int size){
	
	int limit=0,ch;
	while( ((ch=getchar())!=EOF) && (ch !='\n')){
		
			if(limit < size-2)
				currl[limit++]=ch;
				
	}
	
	if(ch =='\n')
		currl[limit++]='\n';
	currl[limit]='\0';

	return(limit);
}
		
			
		

	
	

	

