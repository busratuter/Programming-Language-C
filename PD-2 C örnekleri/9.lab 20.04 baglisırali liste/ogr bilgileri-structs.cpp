#include <stdio.h>


struct student
{
	
	int number;
    char name[20];
    char surname[20];
    int midtermGrade;
    int finalGrade;
}s[3];

int main(){
	
	printf("ogrenci bilgilerini giriniz:");
	
	for(int i=0;i<2;i++){
		
		printf("\n");
		
		printf("\n%d. ogrenci numarasi: ",i+1);
		scanf("%d",&s[i].number);
		
		printf("\nogrenci adi: ");
		scanf("%s",s[i].name);
		
		printf("\nogrenci soyadi: ");
		scanf("%s",s[i].surname);
		
		printf("\nvize notu: ");
		scanf("%d",&s[i].midtermGrade);
		
		printf("\nfinal notu: ");
		scanf("%d",&s[i].finalGrade);
		
	}
		printf("\n----OGRENCI BILGILERI----");
	for(int j=0; j<2; ++j)
    {
    
        printf("\n\nogrenci numarasi= %d ",s[j].number);
        printf("\nName:");
        puts(s[j].name);
        printf("Surname: ");
        puts(s[j].surname);
        printf("vize notu: %d",s[j].midtermGrade);
        printf("\nfinal notu: %d",s[j].finalGrade);
        
      
        printf("\n----------------");
        
    }
	
	return 0;
}
