#include <stdio.h>
int main()
{
    int level;
    scanf("%d",&level);
    int frequency[101]={0};
    int pass=1;
    for(int i=0;i<2;i++)
    {
        int levelComplete;
        scanf("%d",&levelComplete);
        int Levels[levelComplete];
        for(int j=0;j<levelComplete;j++)
        {
            scanf("%d",&Levels[i]);
            frequency[Levels[i]]++;
        }
    }
    for(int i=0;i<level;i++)
    {
        if(frequency[i]==0) pass=0;
    }
    if(pass) printf("I become the guy.");
    else printf("Oh, my keyboard!");
    return 0;
}
