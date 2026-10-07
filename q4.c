#include <stdio.h>
int main(){
    int marks[15];
    int i,range,sum=0,already_100=0,new_100=0,highest=-9999,lowest=1000;
    float avg=0;
    for (i=0;i<15;i++){
        printf("Enter student %d obtained marks: ", i+1);
        scanf("%d",&marks[i]) ;
        

    }
    for (i=0;i<15;i++){
        
        if (marks[i] == 100)
        {
            already_100 = already_100 + 1;
        }
        else if (marks[i] + 5 >= 100)
        {
            marks[i] = 100;
            new_100 = new_100 + 1;
        }
        else
        {
            marks[i] = marks[i] + 5;
        }


        sum=sum+marks[i];
        if (marks[i]<lowest){
            lowest=marks[i];
        }
        if (marks[i]>highest)
        {
            highest=marks[i];
        }
        

    }
    avg=sum/15.0f;
    range = highest-lowest;
    printf("New class Average: %.2f\n", avg);
    printf("Range: %d\n", range);
    printf("Total students with exactly 100 marks: %d\n", new_100+already_100);
    printf("Total students with already 100 marks: %d\n", already_100);
    printf("Total students pushed up to 100 marks: %d\n", new_100);
    return 0;
}