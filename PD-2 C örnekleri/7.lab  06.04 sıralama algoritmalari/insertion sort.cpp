#include<stdio.h>
#include<string.h>

int main(){				
	
	char isim[10];
	char soyisim[8];
	
	strcpy(isim,"busra ");
	strcpy(soyisim,"tuter");
	
	if(strcmp(isim,soyisim)<0) printf("isim, soy isimden daha kucuk");
	else if(strcmp(isim,soyisim)>0) printf("isim, soy isimden daha buyuk");
	else printf("isim, soy isime esit");
	
	printf("\n");
	
	strcat(isim,soyisim);
	
	printf("\"%s\" metninin uzunlugu %d'dir",isim,strlen(isim));
	
	return 0;
}
