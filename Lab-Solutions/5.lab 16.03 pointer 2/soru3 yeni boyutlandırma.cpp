#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int A[100],*p1,*p2;
	int boyut,x;
	p1=A;
	
/*	printf("dizi boyutu: ");   //sorudaki boyut eleman sayisi mi?????
	scanf("%d",&boyut); */
	printf("\np1in ilk adresi : %d\n",p1); //dizinin ilk adresi
	
	printf("\ndizi kac elemanli olsun: ");
	scanf("%d",&x);
	
	for(int i=0;i<x;i++){
	
		printf("p1[%d]: ",i);
		scanf("%d",&p1);
	}
	
	p1 = (int *) malloc(x*sizeof(int));
	printf("\np1in ikinci adresi : %d\n",&p1); //dizinin yeni adresi
	
/*	p2 = (int *) realloc(p1, 10 * sizeof(int));
	p1=p2;
	
	printf("\np2nin ilk boyut adresi : %d\n",&p2);*/
	
	printf("\nyeni elemanlari girin: \n");
	for(int i=0; i<x; i++){
		printf("p2[%d] = ",i);
		scanf("%d",&p2[i]);
	}
	

	p2 = (int *) realloc(p1, 10 * sizeof(int));
	p1=p2;
	
	printf("\np2nin ilk boyut adresi : %d\n",&p2);   
		
	printf("\ndizinin yeni elemanlari \n");
	
	for(int i=0; i<x; i++){
		printf("p2[%d] = %d\n",i,p2[i]);
		
	}	
	
	return 0;
}


