#include<stdio.h>

 /* enum sanfoundry{				//10.SORU 
	
	a=1,b
};

enum sanfoundry1{
	
	c,d
};

main(){
	
	enum sanfoundry1 s1=c;
	enum sanfoundry1 s=a;
	enum sanfoundry1 s2=d;
	
	printf("%d ",s);
	printf("%d ",s1);
	printf("%d ",s2);

	 
}  */ 


/* struct toplama{ 				//11.SORU
	
	int sayi1;
	int sayi2;
	
}toplama;

main(){
	
	printf("1. sayiyi giriniz:");
	scanf("%d",&toplama.sayi1);
	printf("2. sayiyi giriniz:");
	scanf("%d",&toplama.sayi2);
	
	printf("toplam:%d",toplama.sayi1+toplama.sayi2);
	
} */

/* struct student{			//12.SORU
	
	int number;
	char name[50];
	char surname[50];
	int midtermGrade;
	int finalGrade;
	float ortalama;
	
};

typedef struct student student;

int main(){
	
	
	student *ogrenciler=(student *)malloc(5*sizeof(student));
	
	int i,j;
	char temp[20];

	
	
	for(i=0;i<5;i++){
		
		printf("%d. ogrencinin numarasi : ",i+1);
		scanf("%d",&(ogrenciler+i)->number);
		printf("%d. ogrencinin adi : ",i+1);
		gets(temp);
		gets((ogrenciler+i)->name);
		printf("%d. ogrencinin soyadi : ",i+1);
		gets((ogrenciler+i)->surname);
		printf("%d. ogrencinin vize notu : ",i+1);
		scanf("%d",&(ogrenciler+i)->midtermGrade);
		printf("%d. ogrencinin final notu : ",i+1);
		scanf("%d",&(ogrenciler+i)->finalGrade);
		
		printf("\n");
		
	}
	
} */
