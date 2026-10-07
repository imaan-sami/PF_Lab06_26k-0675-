#include <stdio.h>
int main(){
    int stock[10], minimum[10];
    int reorder_amount, lar_reorder_stock, largest, reorder_quantity;
    reorder_amount=0, lar_reorder_stock=0, largest=0, reorder_quantity=0;

    int i;
    for (i=0;i<10;i++){
        printf("Enter stock amount for stock item %d\n",i+1);
        scanf("%d",&stock[i]);

        printf("Enter minimum amount for stock item %d\n",i+1);
        scanf("%d",&minimum[i]);
        
    }

    for (i=0;i<10;i++){
        if (stock[i]<minimum[i]){
            printf("Stock %d must be reordered! \n",i+1);
            
            reorder_amount= minimum[i]-stock[i];
            reorder_quantity=reorder_quantity+ reorder_amount;
            if (reorder_amount>largest){
                largest=reorder_amount;
                lar_reorder_stock= i;
            }
       
        }

    }
    printf("Largest re order stock is %d \n",lar_reorder_stock+1);
    printf("Re order quantity is %d \n",reorder_quantity);
    return 0;
}