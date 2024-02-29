#include<stdio.h>
int main()
{
    int a,b,c,d,e,sum;
    printf("enter the 5 nos. =");
    scanf("%d%d",&a,&b,&c,&d,&e);
    int sum=a+b+c+d+e;
    if(sum%2==0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
}