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
	s1.roll=14;
	s1.marks=9.6;
	s1.grade='O';
	printf("\nsize of s1 variable is %d",sizeof(s1));
	printf("\nroll no is %d",s1.roll);
	printf("\nchar is %c",s1.grade);
	printf("\nmarks = %f",s1.marks);
	return 0;
}
