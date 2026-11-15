
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int anton_Win = 0;
    int danik_Win = 0;

    char *winner = malloc(n * sizeof(char));

    if(winner == NULL)
        return 1;

    for(int i = 0; i < n; i++)
    {
        scanf(" %c", &winner[i]);

        if(winner[i] == 'A')
            anton_Win++;
        else
            danik_Win++;
    }

    printf("%s",(anton_Win == danik_Win) ? "Friendship" :(anton_Win > danik_Win) ? "Anton" : "Danik");

    free(winner);

    return 0;
}
