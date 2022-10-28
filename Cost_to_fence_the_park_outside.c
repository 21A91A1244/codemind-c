#include<stdio.h>
int main()
{
    int L,B,W,C,D;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    D=((L+2*W)*(B+2*W)-L*B);
    printf("%d",D*C);
    return 0;
}