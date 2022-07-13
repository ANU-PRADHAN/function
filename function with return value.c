#include<stdio.h>
int add();
int sub();
int div();
int main(){
	printf("The sum of two numbers is %d\n", add());
	printf("\n");
	printf("The difference of two numbers is %d\n",sub());
	printf("\n");
	printf("The division of two numbers is %d\n",div());
	return 0;
} 
int add(){
	int s,a,b;
	printf("Enter two numbers\n");
	scanf("%d %d",&a,&b);
	s=a+b;
	return s;
}
int sub(){
	int diff,a,b;
	printf("Enter two numbers\n");
	scanf("%d %d",&a,&b);
	diff= a-b;
	return diff;
}
int div(){
	int div,a,b;
	printf("Enter two numbers\n");
	scanf("%d %d",&a,&b);
	div=a/b;
	return div;
}
