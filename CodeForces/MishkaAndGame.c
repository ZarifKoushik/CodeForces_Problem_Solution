#include<stdio.h>
int main()
{
    int round;
    int m,c;
    int mScore=0;
    int cScore=0;
    scanf("%d",&round);
    for(int i=0;i<round;i++)
    {
        scanf("%d %d",&m,&c);
        mScore+=(m>c)?1:0;
        cScore+=(c>m)? 1:0;
    }
    printf("%s",(mScore==cScore)? "Friendship is magic!^^" : (mScore>cScore)? "Mishka" : "Chris");
    return 0;
}
