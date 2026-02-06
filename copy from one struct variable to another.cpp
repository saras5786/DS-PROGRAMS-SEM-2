#include <stdio.h>
struct student 
{
	int roll;
	float marks;
	char grade;
};
int main()
{
	struct student s1,s2;
	s1.roll=10;
	s1.marks=95.6;
	s1.grade='O';
	s2=s1;
	printf("S2 roll is %d\nS2 marks is %f\nS2 grade %c",s2.roll,s2.marks,s2.grade);
	return 0;
}
