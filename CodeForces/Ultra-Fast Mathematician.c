#include <stdio.h>
#include <string.h>

void digit(char a[], char b[], int i)
{
    if(a[i] == '\0')
        return;

    printf("%d", a[i] != b[i]);
    digit(a, b, i + 1);
}

int main()
{
    char a[100], b[100];

    scanf("%s %s", a, b);

    digit(a, b, 0);

    return 0;
}
