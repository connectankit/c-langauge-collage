#include<stdio.h>
int main()
{
	int a,b=1;
	printf("enter a number to print the table: ");
	scanf("%d",&a);
	for(b=1;b<11;b++)
	{
		printf("%d * %d = %d\n",a,b,a*b);
	}
}
