#include<stdio.h>

int x=8;

int main(){

	
		int x=20, y=30;
		
		{
			
			printf("x=%d, y=%d \n",x,y);
			
			{	
				int y=50;
				
				x++;
				y++;
				
				printf("x=%d, y=%d \n",x,y);	
			}
			printf("x=%d, y=%d \n",x,y)	;
		}
	
	
	printf("x=%d",x);
	
	return 0;
}
