// write a program to find out the Sum,Substraction,Multiplication,division & Mdivision ?

# include <stdio.h>
int main()
{
    int a=10,b=2,s,sb,mul,div,Mdiv;
    s=a+b;
    sb=a-b;
    mul=a*b;
    div=a/b;
    Mdiv=a%b;

    printf("The sum of %d & %d is %d \n",a,b,s);
    printf("The sb of %d & %d is %d \n",a,b,sb);
    printf("The mul of %d & %d is %d \n",a,b,mul);
    printf("The div of %d & %d is %d \n",a,b,div);
    printf("The Mdiv of %d & %d is %d \n",a,b,Mdiv);

    return 0;
}   