#include <stdio.h>
int main(){
    int notes500[5] = {10, 5, 8, 12, 6};
    int notes200[5] = {20, 15, 10, 8, 14};
    int notes100[5] = {30, 25, 40, 35, 20};
    int amount;



    int i;
    int total_500=0,total_200=0,total_100=0, total_money=0;

    for (i=0;i<5;i++){
        total_500= total_500+notes500[i]*500;
        total_200= total_200+notes200[i]*200;
        total_100= total_100+notes100[i]*100;
        total_money=total_500+total_200+total_100;
        

    }


    printf("Enter amount to withdraw: \n");
    scanf("%d", &amount);
    
    if (amount>total_money){
        printf("Insufficient Funds");

    }
    else if (amount % 100 !=0 ){
        printf("Invalid Amount");

    }
    else{
        printf("Transaction Approved");


    }

    return 0;

}