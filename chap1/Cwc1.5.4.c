#include<stdio.h>
#include<stdlib.h>

void main(){


	int lines=0,words=0,chars=0,ch,prev='\0';


	while((ch=getchar())!=EOF){
		if(ch=='\n')
			lines++;
		if((ch=='\n'||ch=='\t'||ch==' ') && (!(prev=='\n'||prev =='\t' ||prev==' ')))
			words++;
		prev=ch;
		chars++;
	}
	
	printf("\nlines=%d\nwords=%d\ncharacters=%d\n",lines,words,chars);
}
