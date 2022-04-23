#include <stdio.h>

int toplam(int x);
int main(){
	
	int n,sonuc;
	
	printf("bir n sayisi giriniz :");
	scanf("%d",&n);
	sonuc=toplam(n);
	
	printf("Sayinin basamaklari toplami : %d", sonuc);
}

int toplam(int x){
	
	if(x==0)
	
	return x;
	
	return  x%10 + toplam(x/10);
}
