#include <stdio.h>

int pal(char A[],int, int);

int main(){
	
	char A[100],i=0;
	int n=0;
	
	printf("Bir kelime giriniz : ");
	gets(A);
	
	while(A[n] != '\0')
		n++;
		
 	pal(A,n,i);
	
	return 0;
}

void pal(char a[], int n, int i){
	
	if(a[i] == '\0'){
		printf("Kelime Palindromdur.");
		return 0;
	}
	
	if(a[i] != a[n-i-1]){
		
		printf("Kelime Palindrom Degildir.");
		return 0;
		
	}
	
	return pal(a,++i,n);
}
