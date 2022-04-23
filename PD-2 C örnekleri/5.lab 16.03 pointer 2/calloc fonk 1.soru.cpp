#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int x,enb=0;
	int *elsayp;
	elsayp=&x;
	
	printf("toplam eleman sayisi kac: ");
	scanf("%d",&x);
	
	elsayp = (int *)calloc(x, sizeof(int));
	
	for(int i=0;i<x;i++){
		
		printf("elemanlari giriniz: ",i);
		scanf("%d",elsayp);
		
			
	for (int j=0;j<x;j++){
		if(elsayp[j]>enb){
			enb=elsayp[j];
		}
			else continue;
	
	}
}
	
	printf("\nen buyuk eleman : %d",enb);
	
	return 0;
}
