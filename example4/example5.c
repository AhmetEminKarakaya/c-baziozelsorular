#include <stdio.h>
#include <stdlib.h>

/* mükemmel sayý olduðunu kontrol eden program */

void perfect_number(int number){
	
	if(number<=0){
		printf("It is not perfect number");
	}
	
	else{
		
		int toplam=0,i;
		
		for(i=1;i<number;i++){
			if(number%i==0){
				toplam +=i;
			}
			
			
		}
		if(toplam==number){
			printf("It is perfect number\n");
		}
		else{
			printf("It is not perfect number\n");
		}
		
		
	}
	
	
	
}


int main() {
	
	while(1){
	
	int number;
	
	printf("Please enter a number:\n");
	scanf("%d",&number);
	
	perfect_number(number);
	
}
	return 0;
}
