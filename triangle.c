#include<stdio.h>
int main()
{
    int side1,side2,side3 ;
    printf("Enter the sides");
     scanf("%d",&side1);
     scanf("%d",&side2);
     scanf("%d",&side3);
     if(side1==side2 && side2==side3)
     {
        printf("The triangle is equilateral triangle");
     }
     else if (side1==side2 || side2==side3 || side1==side3)
     {
        printf("The triangle is an isosceles triangle ");
     }
    else
    {
        printf("The trianlge is sacalene triangle ");
    }
}