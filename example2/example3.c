#include <stdio.h>
#include <stdlib.h>

/* dinamik dizi oluþturulacak  */

int *createarrays(size_t n,int val){
	
	int *i;
	int *pd=(int*)malloc(n*sizeof(int));
	
	if(pd==NULL){
		printf("Malloc did not create space area.");
	}
	
	for(i=pd;i<pd+n;i++){
		*i=val;
	}
	
	return pd;
}

#define ARRAYSIZE  5

int main() {
	
	int *pd=createarrays(ARRAYSIZE,3);
	int i;
	if(pd!=NULL){
		
		for(i=0;i<ARRAYSIZE;i++){
			printf("%d ",*(pd+i));
			
		}
	}
	
	return 0;
}
