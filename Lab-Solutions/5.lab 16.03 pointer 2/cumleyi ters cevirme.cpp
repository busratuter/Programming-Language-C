#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
	
	int gecici;
	char cumle[100];
	char *p;
	p=cumle;
	
	p=(char*)malloc(50); 							//bellekte ayrilan ilk kisim
	printf("pointerin bellek yeri : %d\n",&p);
	
	printf("cumle giriniz : ");
	gets(cumle);
	
	int lenght=strlen(cumle);
	
//	for(i=0;*(ptr+i)!='\0';i++,uzunluk++);
	
	void *realloc(void*lenght,50);
	
	for(int i=0;i<lenght/2;i++){
		
		gecici=*(p+i);
		*(p+i)=*(ptr+lenght-i-1);
		*(p+uzunluk-i-1)=gecici;
		
	}
	
	printf("\nTers cevrilmis metin\n------------------------\n");
	printf("%s",p);	
	
	
	

	
	return 0;
}
