#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    while (a<=100)
    {
        printf("%d pounds=%d kilograms\n",
               a,a*227/500);
               a=a+10;
    }

    return 0;
}
