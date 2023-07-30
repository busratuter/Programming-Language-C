#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void ogrNo(int,int*,char*); //ilk int deger ogr no ifade ediyor
int main(){
	
	int x=1254;
	int tek=0,*p1;
	char cift=0,*p2; 
	p1=&tek;
	p2=&cift;
	
	p1 = (int *) malloc(sizeof(int)); 
	p2= (char *) malloc(sizeof(char)); 
	
	ogrNo(x,p1,p2);
	
//	printf(" teksayi %d\n ciftsayi %s",p1,p2);
	
	return 0;
	
}
void ogrNo(int y,int* tek1 ,char* cift1){

	int k,l,m;
	while(y>0) {
		
		if(y%2==1){
			tek1[k] = y%10;
			k++;
		}
		if(y%2==0){
			cift1[l] = y%10;
			l++;
		}
		
		y=y/10;
	}
		
		printf(" teksayi %d\n ciftsayi %d",tek1[0],cift1[0]);
	
}
