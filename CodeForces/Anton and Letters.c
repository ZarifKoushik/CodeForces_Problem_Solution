
#include <stdio.h>

int main()
{
    int seen[26] = {0};
    int distinct = 0;
    char ch;

    while ((ch = getchar()) != '\n' && ch != EOF)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            int index = ch - 'a';

            if (seen[index] == 0)
            {
                seen[index] = 1;
                distinct++;
            }
        }
    }

    printf("%d\n", distinct);

    return 0;
}
