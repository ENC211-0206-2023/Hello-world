//degees fahrenheit to degrees celsius;

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a ;
    printf("enter temperature in degrees fahrenheit:");
    scanf("%d" ,&a);
    if (a==0)
    {
        printf("%4d degrees F=%4d degrees C\n",
               a,(a-32) * 5/9);
    }
    else if (a==100)
    {
        printf("%4d degrees F=%4d degrees C\n",
               a, (a-32)*5/9);
    }
    else
    {
        printf("%4d degrees F=%4d degrees C\n",
               a,(a-32)* 5/9);
               a=a+10;
    }
    return 0;
}

