//aceept a program to accept n city names & accept a city to search.
//(using function without flag).
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100][100],city[50];
	int n,i;
	void search(char s1[100][100],char city[50],int n);
	printf("enter limit=");
	scanf("%d",&n);
	printf("enter n city names=");
	for(i=0;i<n;i++)
	{
		scanf("%s",&s1[i]);
	}
	printf("enter city name to search=");
	scanf("%s",&city);
	search(s1,city,n);
}
void search(char s1[100][100],char city[50],int n)
{         
	int i;
	for(i=0;i<n;i++)
	{
		if(strcmp(s1[i],city)==0)
		{
			printf("city is found");
			break;
		}
	}
	if(i==n)
	printf("city not found");
}
