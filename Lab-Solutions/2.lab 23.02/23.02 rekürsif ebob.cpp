#include<stdio.h>
int ebob(int x,int y);

int main(void)
{  
  int sayi1,sayi2,sonuc;
  printf("1.sayiyi sayisini giriniz:");
  scanf("%d",&sayi1);
  
  printf("2.sayiyi sayisini giriniz:");
  scanf("%d",&sayi2);
  
  sonuc=ebob(sayi1,sayi2);
  
  printf("Sayilarin en buyuk ortak boleni=%d",sonuc);
	
	
	
}
int ebob(int x,int y)
{
	if(y==0) return x;
	
	return ebob(y,x%y);
	
	
	
}
