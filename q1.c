#include <stdio.h>
int main(){
    int car_count[12];
    int i,sum=0,count=0,diff, signal_lowest, signal_highest;
    int highest=-9999;
    int lowest=10000;
    float avg;

    for (i=0;i<12;i++)
    {
        printf("Enter number of cars: \n");
        scanf("%d",&car_count[i]);
        sum=sum+car_count[i];
    }
    avg=sum/12.0f;
    
    for (i=0;i<12;i++)
    {
        if (car_count[i]>avg)
        {
            printf("Signal %d is overloaded. \n ",i+1);
            count=count+1;
        }
        if (car_count[i]<lowest)
        {
            lowest = car_count[i];
            signal_lowest = i;
        }
        if (car_count[i]>highest)
        {
            highest = car_count[i];
            signal_highest = i;

        }

    }

    printf("Signal with lowest cars is %d \n",signal_lowest+1);
    printf("Signal with highest cars is %d \n",signal_highest+1);
    printf("Number of overloaded signals: %d\n", count);

    diff=highest-lowest;
    printf("Difference between the highest and lowest cars on signal: %d \n", diff);

    return 0;
}