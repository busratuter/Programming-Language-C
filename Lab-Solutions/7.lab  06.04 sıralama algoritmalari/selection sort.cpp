#include<stdio.h>

int main(){		//SECÝM SÝRALAMA ALGORÝTMASÝ
	
	int dizi[5]={7,3,5,1,2};
	int n=5;
	
	int i,j;
	int index,enkucuk;
	
	for(i=0;i<n;i++){
		
		enkucuk=dizi[n-1];
		index=n-1;
		
		for(j=i;j<n;j++){
			
			if(dizi[j]<enkucuk){
				
				enkucuk=dizi[j];
				index=j;
				
			}
			
		}
		
		dizi[index]=dizi[i];
		dizi[i]=enkucuk;
		
		
	}
	
	for(i=0;i<n;i++){
		
		printf("%d ",dizi[i]);
		
	}	
	
	return 0;
}
