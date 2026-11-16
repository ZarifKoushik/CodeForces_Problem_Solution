#include <stdio.h>
int main()
{
    int n,h;
    int personHeight;
    int roadWidth=0;
    scanf("%d %d",&n,&h);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&personHeight);
        if(personHeight>h) roadWidth+=2;
        else roadWidth+=1;
    }
    printf("%d",roadWidth);
    return 0;
}
