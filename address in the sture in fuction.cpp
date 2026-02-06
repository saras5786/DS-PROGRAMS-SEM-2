#include <stdio.h>
struct student 
{
	int roll;
	float marks;
};
void display(struct student *s2);
int main()
{
	struct student s1;
	printf("Enter roll:");
	scanf("%d",&s1.roll);
	printf("Enter marks");
	scanf("%f",&s1.marks);
	display(&s1);
	return 0;
}
void display(struct student *s2)
{
	printf("%d\n%f",s2->roll,s2->marks);
}
