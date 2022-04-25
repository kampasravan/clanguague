#include<stdio.h>
#include<conio.h>
struct student
{
	int id;
	clrscr();
	char name[50];
	float percentage;
	}s1={124,"sravan",77.5};
	struct student s2={125,"jeshwanth",100};
	void main()
	{
	struct student s3={108,"ganesh"};
	printf("%d\t%s\t%f\n",s1.id,s1.name,s1.percentage);
	printf("%d\t%s\t%f\n",s2.id,s2.name,s2.percentage);
	printf("%d\t%s\t%f\n",s3.id,s3.name,s3.percentage);
	getch();
     }