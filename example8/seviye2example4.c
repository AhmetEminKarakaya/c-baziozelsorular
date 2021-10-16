#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

/* Dizideki 2. en büyük sayýyý bulan program */



int main() {
	
	
	int array[SIZE]={6,4,2,8,7,3,1,3};
	int max,max2,i;
	
	max=array[0];
	
	for(i=1;i<SIZE;i++){
		
		if(array[i]>max){
			max=array[i];
		}
	}
	
	max2=array[0];
	
	for(i=1;i<SIZE;i++){
		
		if(array[i]<max && array[i]>max2){
			
			max2=array[i];
		}
	}
	
	printf("%d",max2);
	
	
	return 0;
}
