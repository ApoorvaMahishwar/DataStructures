#include <stdio.h>
#include <iostream>

int func(int n)
{
    if (n > 0)
    {
        return fun(n - 1) + n;
    }
    return 0;
}

main()
{
    int a = 5;
    printf("%d", fun(a));
}