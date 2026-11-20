
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int height[101];
    int maxPos = 0, minPos = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &height[i]);

        if(height[i] > height[maxPos])
            maxPos = i;

        if(height[i] <= height[minPos])
            minPos = i;
    }

    int swaps = maxPos + (n - 1 - minPos);

    if(minPos < maxPos)
        swaps--;

    printf("%d\n", swaps);

    return 0;
}
