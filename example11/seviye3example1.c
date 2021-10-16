#include <stdio.h>
#include <stdlib.h>
#define SIZE 30

/* convert integer to binary form */

int main() {
	
	int number,i=0;
	int array[SIZE];
	
	printf("Enter any number:");
	scanf("%d",&number);
	
	while(number>0){
		
		array[i]=number%2;
		
		number=number/2;
		i++;	
	}
	
	for(i=i-1;i>=0;i--){
		printf("%d ",array[i]);
	}
	
	
	return 0;
}
