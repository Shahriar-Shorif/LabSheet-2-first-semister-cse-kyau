#include<stdio.h>
int main()
{

    int x;
    scanf("%d",&x);
    int sum = 0;
    for(int i = 1; i<=x; i++){
        int mul = pow(i,2);
        printf("%d ",mul);
        sum = sum+mul;

    }
     printf("\nSum is: %d\n",sum);
    return 0;
}
