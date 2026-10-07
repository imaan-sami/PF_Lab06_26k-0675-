#include <stdio.h>
int main(){
    int num,digit, reversed=0,original;


    printf("Enter reference number: ");
    scanf("%d",&original);

    num=original;

    while (num!=0){
        digit=num%10;
        reversed=reversed*10+digit;
        num=num/10;
    }

    if(reversed==original)
    {
        printf("Palindrome confirmed");
    
    }
    else
    {
        printf("Palindrome  not confirmed");
    }
    return 0;
}