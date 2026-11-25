#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int hash = 0;

    for(int i = 1; i <= n; i++)
    {
        if(i % 2 == 1)
        {
            for(int j = 1; j <= m; j++)
            {
                printf("#");
            }
        }
        else
        {
            if(hash)
            {
                printf("#");

                for(int k = 1; k <= m-1; k++)
                {
                    printf(".");
                }
            }
            else
            {
                for(int l = 1; l <= m-1; l++)
                {
                    printf(".");
                }

                printf("#");
            }

            hash = !hash;
        }

        printf("\n");
    }

    return 0;
}
