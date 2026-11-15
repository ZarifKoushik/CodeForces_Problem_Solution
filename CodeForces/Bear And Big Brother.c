#include <stdio.h>
int main()
{
    int Limak_weight,bob_weight;
    scanf("%d %d",&Limak_weight,&bob_weight);
    int year=0;
    while(!(Limak_weight>bob_weight))
    {
        Limak_weight*=3;
        bob_weight*=2;
        year++;
    }
    printf("%d",year);
    return 0;
}
