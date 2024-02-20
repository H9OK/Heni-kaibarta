// TO find the area of Square using function 

#include <stdio.h>
void AOS (int s)
{
    int area ;
    area =s*s;
    printf("Area of Square :%d",area);
}
void main()
{
    int side ;

    printf ("\n Enter the length of side : ");
    scanf("%d",&side);

    AOS(side);
}