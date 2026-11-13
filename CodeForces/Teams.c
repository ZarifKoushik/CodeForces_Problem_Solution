#include <stdio.h>
int main()
{
    int n;
    int P,V,T;
    int opinionSum=0;
    int problemSolved=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&P,&V,&T);
        opinionSum=P+V+T;
        if(opinionSum>=2) problemSolved++;
        opinionSum=0;
    }
    printf("%d",problemSolved);
    return 0;
}
