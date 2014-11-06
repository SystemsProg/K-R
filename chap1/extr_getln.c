#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "extr_headers.h"

int getln(){
                
        int limit=0;
        int ch;
	extern char str_arr[];
        while( ((ch=getchar())!=EOF) && (limit<ARRSIZE-1) && (ch!='\n'))
                str_arr[limit++]=ch;
        if(ch=='\n')
                str_arr[limit++]='\n';
        str_arr[limit]='\0';
        return(limit);
}

