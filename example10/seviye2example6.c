#include <stdio.h>
#include <stdlib.h>

/* 3 garson var 5 gün boyunca çalýþýyorlar aldýklarý bahþiþleri yazdýran ve toplam haftada aldýðý bahþiþi yazdýran program */

int *ptr;

void setmatrix(int array[3][5]){
	
	srand(time(NULL));
	int i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			
			array[i][j]=rand()%100;
		}
	}
}

void getmatrix(const int array[3][5]){
	
	int i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			
			printf("%2d ",array[i][j]);
		}
		
		printf("\n");
	}
		
}

int *getwaiterweekoftip(const int array[3][5]){
	
	
	int sum,i,j;
	
	ptr=malloc(3*sizeof(5));
	
	for(i=0;i<3;i++){
		sum=0;
		for(j=0;j<5;j++){
			
			sum +=array[i][j];
			
		}
		*(ptr+i)=sum;
	}
	
	
	return ptr;
}

const char *day[]={"Monday","Tuesday","Wednesday","Thursday","Friday"};

const char *getmaxtip(const int array[3][5],int *maxtip,int *waiter){
	
	
	*waiter=0;
	*maxtip=array[0][0];
	const char * maxday=day[0];
	
	int i,j;
	
	for(i=0;i<3;i++){
		
		for(j=0;j<5;j++){
			
			if(array[i][j]>*maxtip){
				
				*waiter=i;
				*maxtip=array[i][j];
				maxday=day[j];
			}
		}
	}
	
	return maxday;
	
}

int main() {
	
	int array[3][5];
	setmatrix(array);
	getmatrix(array);
	printf("\n\n");
	getwaiterweekoftip(array);
	
	int i;
	
	for(i=0;i<3;i++){
		
		printf("%d.waiter Tip:%d\n",i+1,ptr[i]);
		
	}
	
	int *maxtip,*waiter;
	
	const char *days=getmaxtip(array,&maxtip,&waiter);
	puts(days);
	printf("%d %d",maxtip,waiter);
		
	free(ptr);
	
	return 0;
}
