//aceept n numbers in an array & accept a number to search.

#include<stdio.h>
int main()
{
	int n,i,a[50],num,flag=0;
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
			flag=1;
			break;
		}
	}
	if(flag==1)
	printf("number is found");
	else
	printf("number is not found");
}
