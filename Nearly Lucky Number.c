#include <stdio.h>
int main()
{
    long long n;
    int luckyCount;
    scanf("%lld",&n);

    while(n)
    {
         int r=n%10;
        if(r==7 || r==4) luckyCount++;
        n/=10;
    }
    if(luckyCount==4 || luckyCount==7) printf("YES");
    else printf("NO");
    return 0;
}
