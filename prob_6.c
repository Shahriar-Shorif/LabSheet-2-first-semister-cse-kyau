#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum = 0;
    for(int i = 1; i<=n; i++ ){

            int mul = pow(i,i);
            sum = sum+mul;
            printf("%d ",mul);
    }

        printf("\nSum is: %d\n",sum);
    return 0;
}
