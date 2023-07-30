#include <stdio.h>
									// call by reference ile yapýlacak
									// fonksiyon kullanýlacak 
int main(){
	
	int n,sayi1,sayi2,sayi3,gecici;
	
		
		scanf(" %d\n%d\n%d",&sayi1,&sayi2,&sayi3);
	//	scanf("\n%d",&sayi2);
		//scanf("\n%d",&sayi3);
		
		gecici=sayi1;
		sayi1=sayi2;
		sayi2=sayi3;
		sayi3=gecici;
		
		printf("\n");
	
		printf("birinci sayi %d\nikinci sayi %d\nucuncu sayi %d",sayi1,sayi2,sayi3);
	//	printf("\nikinci sayi %d",sayi2);
	//	printf("\nucuncu sayi %d",sayi3);
		
	return 0;
}
