#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int current;
    int exit[n];
    int enter[n];
    int maxCapacity;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&exit[i],&enter[i]);
        if(i==0){ current=enter[i];
        maxCapacity=current;}
        else
        {
            current=current-exit[i]+enter[i];
            if(current>maxCapacity) maxCapacity=current;
        }
    }
    printf("%d",maxCapacity);
    return 0;
}
