#include<stdio.h>
int main()
{
    int a,b,i,n;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a&&i<=b;++i)
    {
        if(a%i==0&&b%i==0)
        {
            n=i;
        }
    }printf("%d",n);
}