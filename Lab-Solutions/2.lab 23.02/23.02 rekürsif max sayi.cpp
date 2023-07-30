#include <stdio.h>

int enBuyuk(int[], int n, int);   // n fonskiyondaki 

int main(){
	
	int n, A[100];
	printf("Kac elemanli dizi olsun : ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		printf("Dizi elemanlarini giriniz : ",i);
		scanf("%d", &A[i]);
	}
	
	int enb=A[0];
	enb=enBuyuk(A,n-1,enb);
	
	printf("\nDizideki en buyuk eleman : %d",enb);

}

int enBuyuk(int x[], int y, int z){
	
 	 if(y<0)
 	 return z;
  
 	 if(x[y]>z)
 	 {
 	 	z=x[y];
  	
	  }
 	 return enBuyuk(x,y-1,z);
	
}
