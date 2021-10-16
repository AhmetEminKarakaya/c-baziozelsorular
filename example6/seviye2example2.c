#include <stdio.h>
#include <stdlib.h>

/* girilen sayýnýn rakamlarýný kaçar tane kullanýldýðýný bulan program */

int main() {
	
	int number,i,digit;
	int array[10]={0};
	
	printf("Enter any numbers:");
	scanf("%d",&number);
	
	while(number !=0){
		
		digit=number%10;
		array[digit]++;
		number /=10	;
	}
	
	for(i=0;i<10;i++){
		
		printf("Digit:%d  Counter:%d\n",i,array[i]);
	}
	
	
	
	
	
	
	
	
	return 0;
}
