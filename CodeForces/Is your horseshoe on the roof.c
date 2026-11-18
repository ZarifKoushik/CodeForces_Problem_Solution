#include<stdio.h>
int main()
{
    long long s1,s2,s3,s4;
    scanf("%lld %lld %lld %lld",&s1,&s2,&s3,&s4);
    int match=0;
    if(s1==s2 || s1==s3 || s1==s4) match++;
    if(s2==s3 || s2==s4) match++;
    if(s3==s4) match++;

    printf("%d",match);
}
