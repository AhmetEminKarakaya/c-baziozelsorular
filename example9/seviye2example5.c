#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

/* Dizideki 2. en büyük sayýnýn adresini  bulan program */

int main() {
	
	int array[SIZE]={6,4,2,8,7,3,1,3};
	int max,i;
	int *max2=array;
	
	int a=0;
	
	for(i=1;i<SIZE;i++){
		
		if(array[i]>max){
			max=array[i];
		}
	}
	
	*max2=array[0];
	
	for(i=1;i<SIZE;i++){
		
		if(array[i]<max && array[i]>*max2){
			
			*max2=array[i];
			a=i;
		}
	}
	
	printf("%d\n",max2+a);
	printf("%d",&array[4]);
	
	return 0;
}
