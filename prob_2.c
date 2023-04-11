#include<stdio.h>
int main()
{

    int sum = 0;
    for(int x = 1; x<=1024; x = x*2){
        printf("%d ",x);
        sum = sum+x;
    }
    printf("\nSum is: %d\n",sum);
    return 0;
}
