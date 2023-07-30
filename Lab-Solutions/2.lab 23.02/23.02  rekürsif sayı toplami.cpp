#include <stdio.h>

int top(int);

int main(){
	
	int x,toplam;
	printf("Bir sayi giriniz : ");
	scanf("%d",&x);
	
//	toplam=top(x);
	printf("Sayilarin toplami : %d", top(x));
	
}

int top(int x){
	
	if(x==0)	return 0;
	
	else return top(x-1)+x;
}
