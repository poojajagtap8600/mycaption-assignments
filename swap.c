#include<stdio.h>
int main()
{
	int a=5;
	int b=10;
	printf("Before swapping: a=%d b=%d\n",a,b);
	a=a+b;   //a=5+10=15
	b=a-b;   //b=15-10=5
	a=a-b;   //a=15-5=10
	printf("After swapping: a=%d b=%d",a,b);
	return 0;
}
