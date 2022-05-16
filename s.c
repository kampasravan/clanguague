#include <stdio.h>

int fact(int);
void main()
{
    int n,result;
    scanf("%d",&n);
    result=fact(n);
    printf("factorial=%d",result);
}
int fact(int n)
{
    if(n==0||n==1)
    return 1;
    else
    return n*fact(n-1);
}