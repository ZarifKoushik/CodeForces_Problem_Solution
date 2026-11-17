#include<stdio.h>
int main()
{
    int n;
    int living;
    int capacity;
    int possibleRoom=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&living,&capacity);
        if(capacity-living>=2) possibleRoom++;
    }
    printf("%d",possibleRoom);
    return 0;
}
