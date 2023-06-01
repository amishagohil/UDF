#include<stdio.h>

void multi(int n)
{
	int multi;
    multi=n*n*n;
	printf("multipication = %d",multi);
}
int main()
{
	int a;
	printf("enter value =");
	scanf("%d",&a);
	multi(a);
	return 0;
}
