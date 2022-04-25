#include<stdio.h>
#include<conio.h>
struct books
{
	char title[30];
	char author[30];
	int pages;
	float price;
	};
	void main()
	{
      struct books b1={"clanguague","bswamy",720,240.7};
	printf("%s\t%s\t%d\t%f\n",b1.title,b1.author,b1.pages,b1.price);
	getch();
  }