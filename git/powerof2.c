#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    if((x & (x-1))==0)
    {
        printf("power of 2");
    }
    else
    {
        printf("not a power of 2");
    }

    return 0;
}
