#include <stdio.h>
#include <stdlib.h>

void createFile(FILE*); // dosya icerisine yazma
void listele(FILE*);	// dosya icindekini okuma
void ekleme(FILE*);

struct ogrenci {
	
	int no;
	char name[20];
	char dep[20];
	 
};

int main(){
	
	int secim;
	FILE *myFile;

	printf("1-Dosya Olustur/Kayit Ekle\n2-Yeni Kayit Ekleme\n3-Listeleme\n");
	printf("4-Isme Gore Arama\n5-Dosya Boyutu Bulma\n6-Cikis");

	printf("yapmak istediginiz islem ;");
	scanf("%d",&secim);	
	
	while(1){
		
		switch(secim){
			
			case 1: createFile(myFile); break;
			case 2: ekleme(myFile); break;
			case 3: listele(myFile); break;
		}
			printf("\nyapmak istediginiz islem ;");
			scanf("%d",&secim);	
	}
	return 0;
}
	


 void createFile(FILE *myFile){
	struct ogrenci student = {0,"",""};
	
	myFile = fopen("studentinfo.txt","w") ;
	
	if(myFile == NULL)
	printf("Dosya acilamadi/yok"); 
	
	else{
		for(int i=0;i<5;i++){
			fwrite(&student,sizeof(struct ogrenci),1,myFile);
		}
		fclose(myFile);
		
	}
}

 void ekleme(FILE *myFile){
	
	struct ogrenci student = {0,"",""};
	myFile = fopen("studentinfo.txt","r+");
	if(myFile == NULL)
	printf("Dosya acilamadi/yok"); 
	
	else{
		printf("ogrenci no giriniz...bitirmek icin 0 gir ");
		scanf("%d",&student.no);
		
		while(student.no!=0){
			printf("ogrenci adi ve bolumu gir ");
			fscanf(stdin,"%s%s",student.name,student.dep);
			
			fseek(myFile,(student.no-1)*sizeof(struct ogrenci),SEEK_SET);
			
			fwrite(&student,sizeof(struct ogrenci),1,myFile);
			
			printf("\ntekar ogrenci no giriniz");
			scanf("%d",&student.no);
		}
			fclose(myFile);
	}
}

void listele(FILE *myFile){
	
	struct ogrenci student = {0,"",""
	};
	myFile = fopen("studentinfo.txt","r");
	if(myFile == NULL)
	printf("Dosya acilamadi/yok"); 

	else{
		//printf("%d %s %s",student.no,student.name,student.dep); // ilk ekledigin bos verileri gösterir.... 0 gibi
		
		while(!feof(myFile)){
			fread(&student,sizeof(struct ogrenci),1,myFile);
			
			if(student.no!=0){
				printf("%d %s %s\n",student.no,student.name,student.dep);
			}
		}
		
		fclose(myFile);
	}
}

