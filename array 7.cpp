//aceept n numbers in an array & accept a number to search
//(using function).
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
	int i,flag=0;
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
