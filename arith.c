#include <stdio.h>
int main()
{
    int     a=10,b=2,s,sb,mi,di,md;
    s=a+b;
    sb=a-b;
    mi=a*b;
    di=a/b;
    md=a%b;

    printf("The sum of %d & %d is %d\n",a,b,s);
    printf("The Sub of %d & %d is %d\n",a,b,sb);
    printf("The MUL of %d & %d is %d\n",a,b,mi);
    printf("The Div of %d & %d is %d\n",a,b,di);
    printf("The Mod of %d & %d is %d\n",a,b,md);
    

    return 0;
}