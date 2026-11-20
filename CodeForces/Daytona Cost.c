#include <stdio.h>
int main()
{
    int arr[100];
    int t;
    scanf("%d",&t);
    int n,k;
    for(int i=0;i<t;i++)
    {
        int flag=0;
        scanf("%d %d",&n,&k);
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i]);
            if(arr[j]==k) flag=1;
        }
        if(flag)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
