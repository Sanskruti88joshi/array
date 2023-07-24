//aceept n numbers in an array & accept a number to search
//(using function without flag).
#include<stdio.h>
int main()
{
	int n,i,a[50],num;
	void search(int a[50],int num,int n);
	printf("enter limit=");
	scanf("%d",&n);
	printf("enter n numbers=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter number to search=");
	scanf("%d",&num);
	search(a,num,n);
}
void search(int a[50],int num,int n)
{
	int i;
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
