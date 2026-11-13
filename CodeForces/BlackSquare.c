
#include <stdio.h>

int main()
{
    int c[4];
    char s[100001];
    long long calorie = 0;

    for (int i = 0; i < 4; i++)
        scanf("%d", &c[i]);

    scanf("%100000s", s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        calorie += c[s[i] - '1'];
    }

    printf("%lld\n", calorie);

    return 0;
}
