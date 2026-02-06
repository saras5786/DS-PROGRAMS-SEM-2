#include <stdio.h>
struct student
{
	int roll;
	int marks;
};
int main()
{
	struct student s[100];
	int n,i,total=0;
	float avg;
	printf("Enter N size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter Student roll:");
		scanf("%d",&s[i].roll);
		printf("\nEnter the student marks:");
		scanf("%d",&s[i].marks);
		total=total+s[i].marks;
	}
	avg=(float)total/n;
	printf("total is %d\n average is %f",total,avg);
	return 0;
	
}
