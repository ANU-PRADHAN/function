#include<stdio.h>
long long int series(int);
int main(){
	int n;
	long long int f;
	printf("Enter a value for the nth term:\n");
	scanf("%d",&n);
	f= series(n);
	printf("Factorial is %lld",f);
	return 0;	
}
long long int series(int n){
	if(n==0){
		return 1;
	}
	else{
		return(n*series(n-1));
	}
}
