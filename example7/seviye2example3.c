#include <stdio.h>
#include <stdlib.h>
#define SIZE 8



/* Bir dizideki en çok tekrar eden elemaný ve kaç kere tekrar ettiðini bulan program */

void getmaxcount(const int *pa,int size,int *maxval,int *maxvalcount){
	
	int counter=0;
	*maxvalcount=0;
	int i,j;
	
	for(i=0;i<size;i++){
		counter=1;
		for(j=i+1;j<size;j++){
			
			if(pa[j]==pa[i]){
				counter++;
			}
			
			if(counter>*maxvalcount){
				
				*maxvalcount=counter;
				*maxval=pa[j];
			}
		}
	}
}


int main() {
	
	/* Benim yaptýðým
	int array[SIZE]={2,4,6,3,6,1,6,2};
	int counter[SIZE]={0};
	int i,j,max,index;
	
	for(i=0;i<SIZE;i++){
		
		for(j=0;j<SIZE;j++){
			
			if(array[i]==array[j]){
				counter[i]++;
			}
		}
	}
	
	max=counter[0];
	
	for(i=1;i<SIZE;i++){
		
		if(counter[i]>max){
			
			max=counter[i];
			index=i;
		}
	}
	
	printf("%d den %d kadar var.",array[index],max);
	
	*/
	
	int a[]={2,3,5,4,6,2,2,4};
	int maxval,maxcount;
	getmaxcount(a,SIZE,&maxval,&maxcount);
	printf("Maxval:%d  Maxcount:%d",maxval,maxcount);
	
	
	
	return 0;
}
