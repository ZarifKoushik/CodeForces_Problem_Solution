
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    char s[2][12] =
    {
        "that I love",
        "that I hate"
    };

    printf("I hate");

    for(int i=0;i<n-1;i++)
    {
        printf(" %s",s[i%2]);
    }

    printf(" it");

    return 0;
}
