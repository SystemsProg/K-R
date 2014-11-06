#include<stdio.h>
#include<stdlib.h>

int getln( char str_arr[],int length){

        int limit=0;
        int ch;
        while( ((ch=getchar())!=EOF) && (limit<length-2) && (ch!='\n'))
                str_arr[limit++]=ch;
        if(ch=='\n')
                str_arr[limit++]='\n';
        str_arr[limit]='\0';
        return(limit);
}

