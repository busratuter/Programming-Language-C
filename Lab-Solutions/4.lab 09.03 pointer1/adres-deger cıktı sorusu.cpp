/*#include <stdio.h>

int main(){
	
	int var=10;
	int *p;
	p=&var;
	
	printf("Address of var is: %p", &var);
	printf("\nAddress of var is: %p",p);
		
	printf("\nValue of var is: %d", var);
	printf("\nValue of var is: %d", *p);
	printf("\nValue of var is: %d", *(&var));
	
	//Note i have used %p for p's value as it represent adress
	// direkt p yazarsan adresi gösterir
	// ama * koyup yazarsan p yi adresteki degeri gösterir
	
	printf("\n Value of pointer p is: %p", p);
	printf("\n Address of pointer p is: %p", &p);
	
	return 0;
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
