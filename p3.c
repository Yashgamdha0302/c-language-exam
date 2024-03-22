#include<stdio.h>

struct mobile{
	
	char company_name[200];
	char color[20];
	char model[20];
	int price;	
};
main()
{
	int i,n;
	
	printf("Enter the number of mobile :- ");
	scanf("%d",&n);
	
	struct mobile mob[i];	
	
	for(i=1;i<=n;i++)
	{
	
	printf("company name:- \n");
	gets(mob[i].company_name);
	printf("\ncolor :- ");
	gets(mob[i].color);
	printf("\nmodel number:- ");
	gets(mob[i].model);
	printf("\nprice :- ");
	scanf("%d",&mob[i].price);
	}
	
}
