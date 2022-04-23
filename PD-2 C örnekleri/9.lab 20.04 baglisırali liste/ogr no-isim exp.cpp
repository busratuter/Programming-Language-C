#include <stdio.h>
#include <stdlib.h>

struct student{
	int no;
	char name[20];
	int mid;
	int final;
	struct student *next;
};
typedef struct student dugum; // struct student tipinde dugum degiskeni olusturduk
dugum *head,*yenidugum,*oncekidugum,*basari; // dugum tipinde 4 tane pointer olusturduk

void listeolusturma(){ //
	int n,k;
	//dugum *head, *p;
	printf("liste kac elemanli");
	scanf("%d",&n);
	
	for(k=0;k<n;k++){
		
		if(k==0){ // ilk dugum eklenmesi
		
			yenidugum=(dugum*)malloc(sizeof(dugum));
			head=yenidugum;
		}
		else{
			yenidugum->next=(dugum*)malloc(sizeof(dugum));
			yenidugum=yenidugum->next;
		}
		printf("%d.ogrenci no",k+1); scanf("%d",&yenidugum->no);
		printf("%d. ogrenci adi",k+1); scanf("%s",&yenidugum->name);
		printf("%d. ogrencinin vize notu",k+1); scanf("%d",&yenidugum->mid);
		printf("%d. ogrencinin final notu",k+1); scanf("%d",&yenidugum->final);
		
	}
	yenidugum->next=NULL;
}
	void kayitlisteleme(){
	
	dugum *p;
	p=head;
	while(p!=NULL){
		printf("\n********");
		printf("\nogrenci no: %d",p->no); 
		printf("\nogrenci adi: %s",p->name); 
		printf("\nvize notu: %d",p->mid); 
		printf("\nfinal notu: %d",p->final);
		 printf("\n********\n");
		 p = p->next;
	}
}
void ogrenciekleme(){
	
	int kayitno;
	dugum *p,*q;
	
	yenidugum=(dugum*)malloc(sizeof(dugum));
	
		printf("ogrenci no"); scanf("%d",&yenidugum->no);
		printf("ogrenci adi"); scanf("%s",&yenidugum->name);
		printf("vize notu"); scanf("%d",&yenidugum->mid);
		printf("final notu"); scanf("%d",&yenidugum->final);
	
	printf("hangi kayittan öncesine eklemek istiyorsun?");
	printf("\n liste sonu icin 0 gir");
	scanf("%d",&kayitno);
	
	p=head;
	if(p->no==kayitno){ // basa ekleme
		yenidugum->next=p;
		head=yenidugum;
	}
	else{
		
		while(p->next!=NULL){
		
		q=p;
		p=p->next;
		if(p->no==kayitno) break;
		
		}
		
		if(p->no==kayitno){ // araya ekleme
		
		q->next=yenidugum;
		yenidugum->next=p;
		
		}
		
		else if(p->next==NULL){
			
			p->next=yenidugum;
			yenidugum->next=NULL;
			
		}
	
	}	
}

void ogrencisilme(){
	int kayitno;
	dugum *p,*q;
	
	printf("silmek istedigin ogrenci no gir");
	scanf("%d",&kayitno);
	
	p=head;
	if(p->no==kayitno) // bastaki siliniyor
	{
		head=p->next;
		free(p);
	}
	
	else
	{
		while(p->next!=NULL)
		{
			if(p->no==kayitno) break;
			else{
				q=p;
				p=p->next;
			}
		}
		if(p->no==kayitno) //aradan silme
		{
			q->next=p->next;
			free(p);
		}
		else if(p->next==NULL){
			printf("silinecek ogrenci no yok");
		}
	}
}
int main(void){

int a;

printf("hello cnm ");
printf("\n1-Liste olusturma\n2-kayit listeleme\n3-Ogrenci ekleme\n4-Ogrenci Silme\n5-basari bilgisi\n6-Sinif ortalamasi bulma");
//rintf("yapmak istediginiz islemi seciniz(1-5): ");
//scanf("%d",n);

while(1){
	printf("\nyapmak istediginiz islemi seciniz(1-5): ");
	scanf("%d",&a);
	switch(a){
		case 1: listeolusturma(); break;
		case 2: kayitlisteleme(); break;
		case 3: ogrenciekleme(); break;
		case 4: ogrencisilme(); break;
	//	case 5: basaribilgisi(); break;
	//	case 6: ortbulma(); break;
}
}
}
