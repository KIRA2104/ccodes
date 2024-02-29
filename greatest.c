#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("Write all nos.: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b&&a>c)
    {
        printf("a is the largest");        
    }
    if(b>a&&b>c)
    {
        printf("b is the largest");        
    }
    if(c>b&&c>a)
    {
        printf("c is the largest");        
    }
}
