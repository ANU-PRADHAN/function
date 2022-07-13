#include<stdio.h>
void increase();
int main()
{

		
		
		increase();
		increase();
		increase();
		increase();
		return 0;
	}
	void increase(){
		static int a=1;
		
		printf("%d\n",a);
		a=a+1;
		
	}
