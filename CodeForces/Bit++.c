#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x=0;
    char s[3];
    for(int i=0;i<n;i++)
    {
        scanf("%s",s);
        if(strcmp(s,"++X")==0 || strcmp(s,"X++")==0) x++;
        else if(strcmp(s,"--X")==0 || strcmp(s,"X--")==0) x--;
    }
    printf("%d",x);
    return 0;
}
