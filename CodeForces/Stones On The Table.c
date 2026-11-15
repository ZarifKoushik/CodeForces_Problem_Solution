#include <stdio.h>
int main()
{
    char color[51];
    int n;
    scanf("%d",&n);
    int match=0;
    scanf("%s",color);
    for(int i=0;color[i];i++)
    {
        if(color[i]==color[i+1]) match++;
    }
    printf("%d",match);
    return 0;
}
