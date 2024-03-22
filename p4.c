#include<stdio.h>
main()
{
	int n;
	printf("Enter the array size= ");
	scanf("%d",&n);
	int i;
	int a[n],b[n],c[n];
		
	for(i=0;i<n;i++)
	{
		printf("Enter the elementa[%d]",i);
		scanf("%d",&a[i]);	
    }
    for(i=0;i<n;i++)
	{
		printf("Enter the elementb[%d]",i);
		scanf("%d",&b[i]);	
    }
	for(i=0;i<n;i++)
	{
	
	c[i]=a[i]+b[i];
	printf("array c is %d\n",c[i]);
    }
    printf("\n");
}


