#include<stdio.h>
int main()
{
    int a,b,x,i,n,sum=0;
    a = 0;
    b = 1;
    x = a+b;
    printf("Enter series of number here : ");
    scanf("%d",&n);
    printf("Fibonacci series %d ",a,b);
    for(i = 3; i<=n; i++){
            printf("%d ",x);
            a = b;
            b = x;
            x = a + b;
    sum = sum+x;
    }
    printf("\nSum of these fibonacci series is : %d\n",sum+1);

    return 0;
}
