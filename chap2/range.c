#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<float.h>

void main(){

	char charc;
	int integer,i,size_holder,usize_holder;
	unsigned int uint;
	short int shrt_int;
	long int lng_int;
	double dbl;
	long double lng_dbl;
	float flt;


	printf("\nRange of char: %d to %d\n",SCHAR_MIN,SCHAR_MAX);
	printf("Range of signed char: %d to %d\n",SCHAR_MIN,SCHAR_MAX);
	printf("Range of un-signed char: %u to %u\n",0,UCHAR_MAX);
	printf("Range of signed int: %d to %d\n",INT_MIN,INT_MAX);
	printf("Range of un-signed int: %d to %u\n",0,UINT_MAX);
	printf("Range of signed-long int:  %ld to %ld\n",LONG_MIN,LONG_MAX);
	printf("Range of un-signed-long int 0 to %lu\n",ULONG_MAX);
	printf("Range of signed short int:  %d to  %d\n",SHRT_MIN,SHRT_MAX);
	printf("Range of un-signed short int:  %d to %u\n",0,USHRT_MAX);
	printf("Range of float: %f to %f \n",FLT_MIN,FLT_MAX);
	printf("Range of double: %e to %e\n",DBL_MIN,DBL_MAX);
	printf("Range of long-double: %Le to %Le \n\n",LDBL_MIN,LDBL_MAX);
	printf("--------------------------------------------------------\n");
	printf("Range calcualtion manually\n");

	printf("Size of signed Int\n");

	size_holder= (unsigned )(( int) ~0 >>1);
	printf("\n size_holder=%d\n",'0');

		
	
}

