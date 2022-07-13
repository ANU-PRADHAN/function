// auto storage class //
#include<stdio.h>
int main(){
	int a=1;
	int b;
	{
	a=2;{
	a=3;
	printf("%d\t",a);
	}
	printf("%d\t",a);
	}
	printf("%d\t",a);
	printf("%d",b);
	return 0;
}
