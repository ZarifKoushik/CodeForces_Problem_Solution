#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int opinion;
    int hardCount=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&opinion);
        if(opinion==1) hardCount++;
    }
    printf("%s",(hardCount>0)? "HARD" : "EASY");
    return 0;
}
