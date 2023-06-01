#include<stdio.h>

void div(int n)
{
	if(n%3==0 && n%5==0)
	{
		printf("the number is division by 3 & 5.");
	}
	else
	{
		printf("the number is not division by 3 & 5.");
	}
}
int main()
{
	int a;
	printf("enter the value =");
	scanf("%d",&a);
	div(a);
}
