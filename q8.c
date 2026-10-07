#include <stdio.h>

int main()
{
    int row[15];
    int i;


    for (i=0; i<15; i++)
    {
        printf("Enter if seat %d is booked? (0-empty 1-booked): ", i+1);
        scanf("%d", &row[i]);
    }


    int empty=0, booked=0;

    for (i=0; i<15; i++)
    {
        if (row[i]==0)
        {
            empty=empty+1;
        }
        else
        {
            booked=booked+1;
        }
    }

    printf("Booked: %d\n", booked);
    printf("Empty: %d\n", empty);

    int first=0, last=0, count=0;

    for (i=0; i<15; i++)
    {
        if (row[i]==0)
        {
            if (first==0)
            {
                first=i+1;
            }

            last=i+1;
        }
    }

    printf("First empty seat is: %d\n", first);
    printf("Last empty seat is: %d\n", last);


    i=0;

    while (count<3 && i<15)
    {
        if (row[i]==0)
        {
            count=count+1;
            row[i]=1;
        }

        i++;
    }

    int new_empty=0, new_booked=0;

    for (i=0; i<15; i++)
    {
        if (row[i]==0)
        {
            new_empty=new_empty+1;
        }
        else
        {
            new_booked=new_booked+1;
        }
    }

    printf("New Booked: %d\n", new_booked);
    printf("New Empty: %d\n", new_empty);

    printf("Final seating chart: ");

    for (i=0; i<15; i++)
    {
        printf("%d ", row[i]);
    }

    return 0;
}