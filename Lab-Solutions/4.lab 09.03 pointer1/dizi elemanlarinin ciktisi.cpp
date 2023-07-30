/* #include <stdio.h>

int main(){
	
	
	int array[5],n;
	int *p;
	p=array;
	

	
	for(int i=0;i<5;i++){
		
		printf("Dizi elemanlarini giriniz : ",i);
		scanf("%d", &p[i]);
	//	printf("%d",p);
		
	}
	
	//p+=2;  
		
		for(int i=0;i<5;i++){
			
		printf("[%d]",*(p+i));
	}
	
} */
#include<stdio.h>

int main(){
	
	int n;
	
	printf("Bir n degeri giriniz:");
	scanf("%d",&n);
	
	int i,dizi[n];
	int *pdizi;
	
	pdizi=dizi;
	
	printf("\n");
	
	for(i=0 ;i<n ;i++){
		printf("%d. elemani giriniz: ",i+1);
		scanf("%d",pdizi+i);
	}
	
	printf("\n");
	
	for(i=0;i<n;i++){
		printf("%d. eleman = %d\n",i+1,*(pdizi+i));
	}
		
	return 0;
}

