#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char *ptr;
	char *yenidizi;
	
	ptr = (char *) malloc(sizeof(char));
	printf("ptrde tutulan adres %p",ptr);
	
	printf("\nyenidizide tutulan adres %p",yenidizi); // yenidizi icin bellekte yer ayýrmadik.. o yüzden
													//bellek adresinde 00000 yaziyor

	printf("\n\nad ve soyad girin: ");
	gets(ptr);
	
	yenidizi = (char *) malloc(sizeof(char)); 		
//	printf("\n\nyenidizide tutulan adres %p",yenidizi);
	
	strcpy(yenidizi,ptr);
	
//	printf("\nptrdeki normal adiniz soyadiniz : %s",ptr);
	printf("\nyenidizideki adiniz soyadiniz : %s",yenidizi);
	
	return 0;
	
}
