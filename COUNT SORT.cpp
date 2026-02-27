#include <stdio.h>
void countsort(int a[],int n)
{   int i;
    int result[]={0};
	int max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	int count[max+1]={0};
	int temp[n];
	for(i=0;i<n;i++)
	{
		count[a[i]]++;
	}
	for(i=1;i<=max;i++)
	{
		count[i]=count[i]+count[i-1];
	}
	for(i=n-1;i>=0;i--)
	{
		temp[--count[a[i]]]=a[i];
	}
	for(i=0;i<n;i++)
	{
		result[i]= temp[i];
	}
	
}
int main()
{   int i;
	int n;
	printf("\nEnter n size");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter array values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	countsort(a,n);
	printf("\nSorted array is:");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	return 0;
}
