//MERGE SORT ##
#include <stdio.h>
void merge(int a[],int low,int mid,int high );
void mergesort(int a[],int low,int high)
{
	if(low<high)
	{
	   int mid=(low+high)/2;
	   mergesort(a,low,mid);
	   mergesort(a,mid+1,high);
	   merge(a,low,mid,high);
	}
}
void merge(int a[],int low,int mid,int high)
{
	int i=low;
	int j=mid+1;
	int k=0;
	int temp[high-low+1];
	while(i<=mid&&j<=high)
	{
		if(a[i]<=a[j])
		{
			temp[k]=a[i];
			i++;
			k++;
		}
		else
		{
			temp[k]=a[j];
			j++;
			k++;
		}
	}
	if(i>mid)
	{
		while(j<=high)
		{
			temp[k]=a[j];
			j++;
			k++;
		}
	
	}
	else
	{
		while(i<=mid)
		{
		temp[k]=a[i];
		i++;
		j++;
	    }
    }
    
for(i=low,k=0;i<=high;i++,k++)
{
	a[i] = temp[k];
}
	
}
int main()
{
	int a[100];
	int n;
	int i;
	printf("\nEnter array size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter a[%d] element:",i);
		scanf("%d",&a[i]);
	}
	printf("\nBefore sorting:");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	mergesort(a,0,n-1);
	printf("\nAfter sorting:");
	 for(i=0;i<n;i++)
	 {
	 	printf("\t%d",a[i]);
	 }
	 return 0;
}
