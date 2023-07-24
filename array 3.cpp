//aceept n numbers in an array & accept a number to search
//number is found print message inside the for loop.
#include<stdio.h>
int main()
{
	int n,i,a[50],num;
	printf("enter limit=");
	scanf("%d",&n);
	printf("enter n numbers=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter number to search=");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			printf("number is found");
			break;
		}
	}
	if(i==n)
	printf("number is not found");
}
