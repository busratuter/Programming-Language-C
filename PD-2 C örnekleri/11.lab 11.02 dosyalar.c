#include <stdio.h>

void create(FILE*); // dosya icerisine yazma
void listele(FILE*);	// dosya icindekini okuma
void ekle(FILE*);		//dosyaya ekleme yapma
void arama(FILE*);
void fileSize(FILE*);

int main(){
	
	FILE *myFile;
	int secim;
	printf("yapmak istediginiz islem\n\n");
	printf("1-Dosya Olustur/Kayit Ekle\n2-Listeleme\n3-Yeni Kayit Ekleme\n");
	printf("4-Isme Gore Arama\n5-Dosya Boyutu Bulma\n6-Cikis");
	scanf("%d",&secim);
	
	while(1){
		
		switch(secim){
			case 1: create(myFile); break;
			case 2: listele(myFile); break;
			case 3: ekle(myFile); break;
			case 4: arama(myFile); break;
			case 5: fileSize(myFile); break;
			case 6: break;
		}
		fclose(myFile);
	}
}

void create(FILE *myFile){ // dosya olusturu ve icine yazar
	
	int no;
	char name[20],dep[20];
	//myFile = fopen("studentinfo.txt","w");
	if((myFile = fopen("studentinfo.txt","w"))==NULL) 
	printf("Dosya acilamadi/yok");
	
	else{
		printf("No-Name-Dep");
		scanf("%d %s %s",&no,name,dep);
		
		while(!feof(stdin)){
			fprintf(myFile,"%d %s %s\n",no,name,dep);
			printf("??");
			scanf("%d %s %s",&no,name,dep);
			
		}
		fclose(myFile);
	}
}

void listele(FILE *myFile){
		int no;
	char name[20],dep[20];
	//myFile = fopen("studentinfo.txt","w");
	if((myFile = fopen("studentinfo.txt","r"))==NULL) 
	printf("Dosya acilamadi/yok");
	
	else{
		printf("No-Name-Dep\n");
		fscanf(myFile,"%d %s %s",&no,name,dep);
		
		while(!feof(myFile)){
			printf("%d %s %s\n",no,name,dep);
			//printf("??");
			fscanf(myFile,"%d %s %s",&no,name,dep);
			
		}
		fclose(myFile);
	}
	
}

void ekle(FILE *myFile){
	
	int no;
	char name[20],dep[20];
	//myFile = fopen("studentinfo.txt","w");
	if((myFile = fopen("studentinfo.txt","a"))==NULL) 
	printf("Dosya acilamadi/yok");
	
	else{
		printf("yeni ogrencinin: No-Name-Dep");
		scanf("%d %s %s",&no,name,dep);
		
		while(!feof(stdin)){
			fprintf(myFile,"%d %s %s\n",no,name,dep);
			printf("??");
			scanf("%d %s %s",&no,name,dep);
			
		}
		fclose(myFile);
	}
}


void arama(FILE *myFile){
	int no;
	char name[20],dep[20];
	
	printf("aranacak ogrencinin ismini girin ");
	char aranan[20];
	scanf("%s",aranan);
	FILE *myFile1=fopen("studentinfo.txt","r");
	fscanf(myFile,"%d %s %s",&no,name,dep);
}



void fileSize(FILE*myFile){
	
 	myFile = fopen("file", "r");
 //	int c = fgetc(myFile);
 	int new_pos;
 	fseek(myFile, 0, new_pos);
 	
	 	int size = 0;
	while (!feof(myFile))
//	while(fseek!=NULL)
	{
//	fgetc(myFile);
	size++;
	}
	
	fprintf(myFile,"Dosya boyutu : %d",size);
	
}
