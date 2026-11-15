#include <stdio.h>
int main()
{
    int k,w,n;
    scanf("%d %d %d",&k,&w,&n);
    int total=k*n*(n+1)/2;
    printf("%d",total<=w ? 0 : total-w);
    return 0;
}
