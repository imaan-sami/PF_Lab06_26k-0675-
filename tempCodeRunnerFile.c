#include <stdio.h>
int main(){
    int row[15];



    for (i=0;i<15;i++){
        printf("Enter if seat %d is booked? (0-empty 1-booked)", i+1);
        scanf("%d",&row[i]);

    }

    int empty,booked;
    for (i=0;i<15;i++){
        if (row==0){
            empty=empty+1;
        }
        else{
            booked=booked+1;
        }
    }

    printf("Booked: %d",booked);
    printf("Empty: %d",empty);

    int first,last;count=0;
    for(i=0;i<15;i++){
        if (row[i]==0){
            printf("%d",i);
            last=i;
           
        }
    
    while(count<=3 && i<15){
        if (row[i]==0){
            count=count+1;
            row[i]=1;
            i++
        }

    }
    }
    printf("Last empty seat is:%d \n",last);

    int new_empty,new_booked;
    for (i=0;i<15;i++){
        if (row==0){
            new_empty=new_empty+1;
        }
        else{
            new_booked=new_booked+1;
        }
    }

    printf("New Booked: %d",new_booked);
    printf("New Empty: %d",new_empty);
    
}