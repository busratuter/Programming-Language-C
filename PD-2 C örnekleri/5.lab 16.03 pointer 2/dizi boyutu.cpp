#include <stdio.h>
#include <stdlib.h>
int main(){
	int i,enb,x,*p,*ptr,A[100];
	printf("kac elemanli dizi= ");
	scanf("%d",&x);
	
		printf("p nin boyutu :%d\n",&p);
		
	for(i=0; i<x; i++){
		printf("A[%d] = ",i);
		scanf("%d",&A[i]);
	}
	ptr = (int *) malloc(x);
	p = A;
	p = (int *) realloc(ptr, 10 * sizeof(int));
	
	printf("p nin boyutu :%d",&p);
	
	printf("\nsimdi yeni elemanlari gir\n");
	for(i=0; i<x; i++){
		printf("p[%d] = ",i);
		scanf("%d",&p[i]);
	}
	printf("yaziom bakk \n");
	for(i=0; i<x; i++){
		printf("p[%d] = %d\n",i,p[i]);
		
	}


}
