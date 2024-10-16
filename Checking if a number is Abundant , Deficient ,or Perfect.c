#include <stdio.h>
#include <conio.h>
#include <limits.h>
int main()
{
	int flag=0,number,lastelementtrack=0,sum;
	int divisors[100];
	while (flag==0)
	{
		printf("Enter a positive number: \n");
		scanf("%d",&number);
		if (number>0)
		{
			flag=1;
		}
		else
		{
			printf("Invalid input!Number must be positive\n");
		}
	}
	for (int i=1;i<number;i++)
	{
		if (number % i==0)
		{
			divisors[lastelementtrack]=i;
			lastelementtrack=lastelementtrack+1;
		}
	}
	for (int j=0;j<lastelementtrack;j++)
	{
		sum=sum+divisors[j];
	}
	if (sum>number)
	{
		printf("Abundant factors are: ");
		for (int k=0;k<lastelementtrack;k++)
		{
			printf("%d ",divisors[k]);
		}
		printf("\n");
		printf("Sum is %d\n",sum);
	}
	else if (sum<number)
	{
		printf("Deficient factors are: ");
		for (int l=0;l<lastelementtrack;l++)
		{
			printf("%d ",divisors[l]);
		}
		printf("\n");
		printf("Sum is %d\n",sum);
	}
	else
	{
		printf("Perfect factors are: ");
		for (int m=0;m<lastelementtrack;m++)
		{
			printf("%d ",divisors[m]);
		}
		printf("\n");
		printf("Sum is %d\n",sum);
	}
	
}