#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	int *p;
	int x,n=0;
		
	p = (int *) malloc(sizeof(int)); 	
	
	while(1){
	
		printf("sayi gir ");
		scanf("%d",&x);		
	
		
		if(x==0) break;		
		
		p=(int*)realloc(p,(n+1)*sizeof(int));
		*(p+n)=x;
		
		n++;
		}
		
	for(int j=0;j<n;j++){
		
		printf("\n\ndizi elemanlari:");
		printf("\n%p",(p+j));
		
	}
} 

/*int main(){
	
	int i=0,gecici,j;
	int *ptr=(int *)malloc(sizeof(int));
	
	while(1){
		
		printf("%d. sayiyi giriniz : ",i+1);
		scanf("%d",&gecici);
		
		if(gecici==0) break;
		
		ptr=(int*)realloc(ptr,(i+1)*sizeof(int));
		
		*(ptr+i)=gecici;
		
		i++;
		
	}
	
	for(j=0;j<i;j++){
		
		printf("\n%pc",(ptr+j));
		
	}
	
	return 0;
} */

