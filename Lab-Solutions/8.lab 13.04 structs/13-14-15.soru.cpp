#include<stdio.h>
#include<string.h>

/* struct player{			//13.SORU 
	
	char pname[20];
	
}p1;

char* play(struct player *temp_p1){
	
	
	strcpy(temp_p1->pname,"kohli");
	return temp_p1->pname;
	
}

main(){
	
	
	strcpy(p1.pname,"dhoni");
	printf("%s %s",p1.pname,play(&p1));
	
} */ 

/* struct student{			//14.SORU
	
	char name[50];
	int age;
	
};

void display(struct student s);

main(){
	
	
	struct student s1;
	
	printf("enter name ");
	scanf("%[^\n]%*c",&s1.age);
	
	display(s1);
	
}

void display(struct student s){
	
	printf("\nDisplaying information \n");
	printf("name: %s \n",s.name);
	printf("age : %d",s.age);
} */

/* struct student{				//15.SORU
	
	char name[50];
	int age;
	
};

struct student getInformation();

main(){
	
	
	struct student s;
	
	s=getInformation();
	
	printf("\nDisplaying information \n");
	printf("name: %s",s.name);
	printf("\nroll : %d",s.age);
	
}

struct student getInformation(){
	
	struct student s1;
	
	printf("enter name : ");
	scanf("%[^\n]%*c",s1.name);
	
	printf("enter age : ");
	scanf("%d",&s1.age);
	
	return s1;
} */
