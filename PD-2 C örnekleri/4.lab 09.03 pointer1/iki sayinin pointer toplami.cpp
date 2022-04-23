#include <stdio.h>

int main(){
	
	int sayi1,sayi2,toplam;
	int *p1;
	int *p2;
	
	p1=&sayi1;
	p2=&sayi2;
	
	printf("Iki sayi giriniz :");
	scanf("%d%d", p1,p2);
	
//	p1=&sayi1;
//	p2=&sayi2;
	
	toplam=*p1+*p2;
	
	printf("Iki sayinin toplami : %d", toplam);
	
	return 0;
	
}
