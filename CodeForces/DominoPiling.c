#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d",(m*n)%2==0 ? (m*n)/2 : (int)(m*n/2));
    return 0;
}
