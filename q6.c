#include <stdio.h>
int main()
{
    int Fibonacci_pattern[10];
    int temp=0,pre_num=0,num=1,i=1;
    Fibonacci_pattern[0]=1;
    do {
        temp=num;
        num=pre_num+temp;
        Fibonacci_pattern[i]=num;
        pre_num=temp;
        i++;

    }while(i<10);
    
    for (i=0;i<10;i++){
        printf("%d ",Fibonacci_pattern[i]);
    }
}
