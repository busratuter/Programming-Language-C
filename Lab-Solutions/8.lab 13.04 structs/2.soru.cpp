#include <stdio.h>


enum State {WORKING, FAILED, FREEZED};

enum State currState = 2;
enum State FindState(){
	
	return currState;
}

int main(){
//	enum State currState = 1;
	(FindState()==WORKING)? printf("WORKING"): printf("NOT WORKING");
	
	return 0;
} 


/*enum day {
	a,b,c=5,d,e
};

main(){
	printf("a gir");
//	scanf("%d",a);
	printf("%d",d);
} */

