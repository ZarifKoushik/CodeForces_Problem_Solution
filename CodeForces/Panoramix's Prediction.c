
#include <stdio.h>

int isPrime(int x)
{
    if(x == 2) return 1;
    if(x < 2 || x % 2 == 0) return 0;

    for(int i = 3; i * i <= x; i += 2)
    {
        if(x % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int x, y;
    int exist = 0;

    scanf("%d %d", &x, &y);

    for(int i = x + 1; i < y; i++)
    {
        if(isPrime(i))
        {
            exist = 1;
            break;
        }
    }


    if(!exist and isPrime(y)){
        printf("YES");

    }
    else printf("NO");

    return 0;
}
