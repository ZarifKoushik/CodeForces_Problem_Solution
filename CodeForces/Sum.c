#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        printf("%s\n",(a+b==c || b+c==a || a+c==b)? "YES" : "NO");

    }
    return 0;

}
