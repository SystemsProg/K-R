#include<stdio.h>
#include<stdlib.h>

double power(float, int);

void main(){
	
	 float base;
	 int expo;


	printf("\nBase:");
       	if(!(scanf("%f",&base))){
		printf("\nInvalid Base\n");
		exit(1);
	}
	printf("\n Exponent:");
	if(!(scanf("%d",&expo))){
		printf("\nInvalid Exponent\n");
		exit(1);
	}

	printf("\nBase:%.0f\nExponent:%d\nValue:%10.10f\n",base,expo,power(base,expo));
	
	
}


double power(float base, int expo){

	if((base>0)|| (base <0)){
			if(expo ==0)
				return 1;
			else if (expo <0)
				return((power(base,expo+1)/base));
			
			else
				return( base*(power(base,expo-1)));
	}
	
	else 
			return 0;

}

