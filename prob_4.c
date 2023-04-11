#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int sum = 0;
    for(int x = 1; x<=n; x = x+2){
        int mul = pow(x,3);
        sum = sum+mul;
        printf("%d ",mul);


    }
     printf("\nSum is: %d\n",sum);
    return 0;
}
