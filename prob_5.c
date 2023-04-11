#include<stdio.h>
int main()
{
  int x;
  scanf("%d",&x);
  int i;
  int sum = 0;

    for(i=1;i<=x;i++){
        int mul = pow(i,3);
        sum = sum+mul;

  }

      printf("%d\n",sum);
    return 0;
}
