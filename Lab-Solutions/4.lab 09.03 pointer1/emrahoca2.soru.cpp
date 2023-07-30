#include<stdio.h>
int main(void)
{
	int ary[4]={1,2,3,4};
	int *p=ary+2;
	printf("%d %d\n",p[-2],ary[*p]);
	
}
