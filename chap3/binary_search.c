#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i=0,flag=0,low=0, high=10,mid=0,key=0;
	int limit=10;
	int int_arr[10];
	printf("Enter numbers in ascending order:\n");
	
	for( i=0; i<10;i++)
		scanf("%d",&int_arr[i]);
	printf("\n Enter value to be searched:");
	scanf("%d",&key);
	

	while(high >=0 && low < limit){

		mid=(high+low)/2;
		
		if( key < int_arr[mid])
			high= mid-1;
		else if ( key  > int_arr[mid])
			low= mid+1;
		else{
			flag=1;
			break;
		}
	}

	if( flag ==1)
		printf("\n Key: %d at : %d\n",key,mid);
	else
		printf("Key not found\n");

}
