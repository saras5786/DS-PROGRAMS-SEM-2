#include <stdio.h>
	union student
	{
		int roll;
		float marks;
		char grade;
	};
int main()
{
	union student s1;
	printf("Enter roll marks grade:");
	scanf("%d%f%c",&s1.roll,&s1.marks,&s1.grade);
	printf("\nsize of s1 variable is %d",sizeof(s1));
	printf("\nroll no is %d",s1.roll);
	printf("\nchar is %c",s1.grade);
	printf("\nmarks = %f",s1.marks);
	return 0;
}
