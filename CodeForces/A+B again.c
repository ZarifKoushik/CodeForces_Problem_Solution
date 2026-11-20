#include <stdio.h>
int digitSum(int n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main()
{
    int t;
    scanf("%d",&t);
    int n;
    for(int i=0;i<t;i++)
    {
        scanf("%d",&n);
        printf("%d\n",digitSum(n));
    }
    return 0;
}
