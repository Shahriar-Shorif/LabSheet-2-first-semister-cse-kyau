#include<stdio.h>
int main()
{
    int sum = 0;
    for(int x = 5; x<=100; x = x+5){
            printf("%d ",x);
        sum = sum+x;
    }
    printf("\nSum is: %d\n",sum);
    return 0;
}
