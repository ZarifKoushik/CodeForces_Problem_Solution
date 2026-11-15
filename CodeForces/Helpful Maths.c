
#include <stdio.h>
#include <string.h>

int main()
{
    char sum[101];
    scanf("%s", sum);

    int n = strlen(sum);

    for(int i = 0; i < n; i += 2)
    {
        for(int j = i + 2; j < n; j += 2)
        {
            if(sum[i] > sum[j])
            {
                char temp = sum[i];
                sum[i] = sum[j];
                sum[j] = temp;
            }
        }
    }

    printf("%s\n", sum);

    return 0;
}
