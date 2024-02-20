// write a program include addition, substracttion,Multiplication,division,Modular division 
#include <stdio.h>
int main()
{
    int a=10,b=2 ,sum,sub,mul,di,mod;

    sum=a+b,sub=a-b,mul=a*b,di=a/b,mod=a%b;

    printf ("The sum of %d a & %d is %d ",a,b,sum);
    printf ("\nThe sub of %d a & %d is %d ",a,b,sub);
    printf ("\nThe mul of %d a & %d is %d ",a,b,mul);
    printf ("\nThe div of %d a & %d is %d ",a,b,di);
    printf ("\nThe mod of %d a & %d is %d ",a,b,mod);

    return 0;
}