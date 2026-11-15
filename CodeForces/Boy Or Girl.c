#include <stdio.h>

int main()
{
    char name[101];
    int unique=0;

    scanf("%s", name);

    for(int i=0; name[i]; i++)
    {
        int found=0;

        for(int j = 0; j < i; j++)
        {
            if(name[i] == name[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
            unique++;
    }

    if(unique % 2 == 0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");

    return 0;
}
