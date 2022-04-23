#include <stdio.h>

int main(){
	
	char str[100];
	int lenght;
	
	printf("String elemanlarini girin\n");
 	 gets(str);
 	 
 	while (str[lenght] != '\0'){
	 
    lenght++;
}
	
    
    while(lenght!='\0'){
    		
    		str[lenght]=str[lenght-1];
    		printf("%s",&str[lenght]);
    		
    	//	str[lenght-1]=gecici;
    	//	gecici=str[lenght];
    		lenght--;
    		printf("\n");
    		
	}
   /* for(lenght;lenght<0;lenght--){
    	
    	str[lenght]=str[lenght-1];
    
	}*/
	//	printf("%s",str[lenght]);
		
	//printf("%d",lenght);
}
