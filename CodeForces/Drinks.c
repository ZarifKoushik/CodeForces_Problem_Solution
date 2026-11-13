#include <stdio.h>
int main()
{
    int n;
    int orangeVolume;
    int totalVolume=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&orangeVolume);
        totalVolume+=orangeVolume;
    }
    printf("%f",(float)totalVolume/n);
    return 0;
}
