#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	char adsoyad[100];//={b,u,s,r,a};
	char yenidizi[100];
	char *ptr;
	ptr=adsoyad;
	
	ptr = (char *) malloc(5*sizeof(char));
		
	printf("ad ve soyad girin ");
	gets(adsoyad);
//		ptr = (char *) malloc(5*sizeof(char));

//	yenidizi = (char *) malloc(sizeof(char));

//	printf("%d",ptr);
	
	strcpy(yenidizi,ptr);
	printf("\nstrcpy fonk ile degistirilmis : %s",yenidizi);
	
	return 0;
	
} 
/*int main(){

	char adsoyad[]={"busra"};
	char yenidizi[100];
	char *ptr;
	ptr=adsoyad;
	
	ptr = (char *) malloc(5*sizeof(char));
	
	strcpy(yenidizi,adsoyad);
	printf("\nyenidizi pointerina\natanmis durumu : %s",yenidizi);
	
	return 0;
} */
