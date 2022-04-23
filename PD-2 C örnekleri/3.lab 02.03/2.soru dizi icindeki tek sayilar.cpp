#include <stdio.h>

int teksayi(int [], int);


int main(){
	
	int A[100];
	int n=0,sonuc;
	int tektoplam=0;
	
	printf("Dizi kac elemanlý olsun : ");
	scanf("%d", &n);
	
		for(int i=0;i<n;i++){
		printf("Dizi elemanlarini giriniz : ",i);
		scanf("%d", &A[i]);
	}
	sonuc=teksayi(A,n-1);
	printf("Dizi icindeki tek sayi : %d", sonuc);
}
	
	int teksayi(int A[], int n){
		
		if(n<0) return 0;
		
		if(A[n]%2==1) return teksayi(A,n-1)+1;
		
		return teksayi(A,n-1);
}

