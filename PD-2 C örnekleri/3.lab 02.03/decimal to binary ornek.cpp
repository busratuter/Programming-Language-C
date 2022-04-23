#include <stdio.h>

	int donusturme(int);
	int main(){
		
		int sonuc,x;
		
		printf("  Lutfen ikilik sisteme gecirmek \n");
		printf("   istediginiz sayiyi giriniz : ");
		scanf("%d",&x);
		
		sonuc=donusturme(x);
		printf("Sayinin donusturulmus hali %d", sonuc);
	}
	
	int donusturme(int x){
		
		if(x==0) return 0;
		
		return x%2 + 10*donusturme(x/2);
	}
	
	
