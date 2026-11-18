#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char currentpole[3];
    char tempPole[3];
    int group=0;
    for(int i=0;i<n;i++)
    {
        scanf("%2s",currentpole);
        if(i==0) group=1;
        else if(strcmp(currentpole,tempPole)!=0) group++;
        strcpy(tempPole,currentpole);
    }
    printf("%d",group);
    return 0;
}
