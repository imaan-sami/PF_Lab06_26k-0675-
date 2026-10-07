#include <stdio.h>

int main()
{
    int transfers[10] = {5000, 50, 12000, 500000, 20, 8000, 25000, 300, 450000, 15000};

    int i;
    int flagged=0;
    int normal_sum=0;
    int normal_count=0;
    int largest=transfers[0];

    for (i=0; i<10; i++)
    {
        if (transfers[i] < 100)
        {
            printf("Too small: %d\n", transfers[i]);
            flagged=flagged+1;
        }
        else if (transfers[i] > 200000)
        {
            printf("Too large: %d\n", transfers[i]);
            flagged=flagged+1;
        }
        else
        {
            normal_sum=normal_sum+transfers[i];
            normal_count=normal_count+1;
        }

        if (transfers[i] > largest)
        {
            largest=transfers[i];
        }
    }

    printf("Total flagged transfers: %d\n", flagged);

    printf("Average of normal transfers: %d\n", normal_sum/normal_count);

    printf("Largest transfer: %d\n", largest);

    return 0;
}