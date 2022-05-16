/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<conio.h>
void sum (int a,int b);
void main()
{
        int a=10,b=20;
        sum(10,20);
}
void sum(int x,int y)
{
    int c;
    c=x+y;
    printf("c=%d",c);
}

