#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	
	char *p1,*p2,c,*p3;
	char total;
	int i=0;
	int j=0;
	
	p1 = (char *) malloc(sizeof(char)); 
	printf("ilk karakteri giriniz: ");
	
	while((c=getchar())!='\n'){

	*(p1+i)=c;
	i++;
	
	p1=(char*)realloc(p1,(i+1)*sizeof(char));
	
	}
	*(p1+i)='\0';
	
		p2 = (char *) malloc(sizeof(char)); 
		printf("ikinci karakteri giriniz: ");
	
	while((c=getchar())!='\n'){

	*(p2+j)=c;
	j++;
	
	p2=(char*)realloc(p2,(j+1)*sizeof(char));
	
	}
	
	*(p2+j)='\0';
	
		p3 = (char *) malloc((i+j)*sizeof(char)); 
	
	i=0;
	
	while(*(p1+i)!='\0'){
		
		*(p3+i)=*(p1+i);
		i++;
	}
	j=0;
	
	while(*(p2+j)!='\0'){
		
		*(p3+i)=*(p2+j);
		i++;
		j++;
	}
	
	*(p3+i)='\0';
	
		printf("birlesmis hali: %s",p3);
	
	return 0;

}
