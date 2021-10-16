#include <stdio.h>
#include <stdlib.h>

/* Bir dizinin uzunluðunu bulan ve artýk bir yýlýn artýk olup olmadýðýný bulan makro þeklinde yazýlmýþ program*/


#define sizeofarray(a)  (sizeof(a)/sizeof(a[0]))

#define isartik(y)  ((y)%4==0 && ((y)%400==0 || (y)%100 !=0))



int main() {
	
	
	int b[]={1,2,3,4,5};
	printf("%d\n",sizeofarray(b));
	printf("%d ",isartik(1700));
	
	
	
	return 0;
}
