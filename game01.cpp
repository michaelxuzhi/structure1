#include<stdio.h>
struct student
{
	int year;
	char name[9];
	int num;
	char sex;
	float score;
	void sr();
}s1;
void sr()
{
	printf("Enter the year of the student:");
	scanf("%d",&s1.year);
	printf("Enter the name of the student:");
	scanf("%s",&s1.name);
	printf("Enter the number of the student:");
	scanf("%d",&s1.num);
	printf("Enter the sex of the student:");
	scanf("%c",&s1.sex);
	printf("Enter the score of the student:");
	scanf("%f",&s1.score);
};
void main()
{
	printf("Please input students' information:");
	s1.sr();
}
	