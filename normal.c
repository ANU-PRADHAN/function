#include<stdio.h>
int a;
void increase();
void decrease();

int main(){
	printf("Initial value of a =%d",a);
	
	increase();
	increase();
	decrease();
	decrease();
	return 0;
}

void increase(){
	a=a+1;
	printf("\n increased a =%d",a);
}
void decrease(){
	a=a-1;
	printf("\n decreased a =%d",a);
}
