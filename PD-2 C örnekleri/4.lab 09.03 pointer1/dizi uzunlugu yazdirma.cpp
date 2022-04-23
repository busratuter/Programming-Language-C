#include <stdio.h>

int main(){
	
	char str[100];
	int *pstr;
	int i=0;
	pstr=&i;
	
	printf("String elemanlarini giriniz : ");
 	gets(str);

  	while (str[i] != '\0')
    i++;

  printf("\nStringin uzunlugu: %d", *pstr);
	
}
