//aceept a program to accept n city names & accept a city to search.
//(without flag).
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100][100],city[50];
	int n,i;
	printf("enter limit=");
	scanf("%d",&n);
	printf("enter n city names=");
	for(i=0;i<n;i++)
	{
		scanf("%s",&s1[i]);
	}
	printf("enter city name to search=");
	scanf("%s",&city);        
	for(i=0;i<n;i++)
	{
		if(strcmp(s1[i],city)==0)
		{
			printf("city is found");
			break;
		}
	}
	if(i==n)
	printf("city is not found");
}
