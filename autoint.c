// auto storage class //
#include<stdio.h>
int main(){
	int a=1;
	int b;
	{
	auto int a=2;{
	auto int a=3;
	printf("%d\t",a);
	}
	printf("%d\t",a);
	}
	printf("%d\t",a);
	printf("%d",b);
	return 0;
}
