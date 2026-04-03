#include <stdio.h>

int main()
{
    int num,a,b,c,d;

    printf("Numero: ");
    scanf("%d",&num);

    a=num/1000;
    b=(num/100)%10;
    c=(num/10)%10;
    d=num%10;

    if(a==d && b==c)
    printf("Capicua");
    else
    printf("No capicua");

    return 0;
}
