#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* delay fonksiyonu yazma */

void delay(int seconds){
	
	clock_t start=clock();
	
	while((double)(clock()-start)/1000<seconds){
		;
	}
		
	
}

int main() {
	
	delay(2);
	
	printf("Hello");
	
	return 0;
}
