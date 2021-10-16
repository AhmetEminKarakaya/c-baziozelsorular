#include <stdio.h>
#include <stdlib.h>

/* Bir cümledeki kaç adet sesli harf olduðunu bulan program */

int numberofvalue(){
	
	int vovel=0;
	int ch;
	
	while((ch=getchar())!= '\n'){
		
		switch(tolower(ch)){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				++vovel;
				
			default:
				break;
		}	
	}
	return vovel;		
}
int main() {
	
	int number=numberofvalue();
	printf("%d ",number);
	return 0;
}
