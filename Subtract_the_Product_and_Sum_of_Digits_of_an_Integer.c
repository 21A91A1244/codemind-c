#include<stdio.h>
int main()
{
    int n,p=1,s=0,i=1,r;
    scanf("%d",&n);
    while(i<=n)
    {
        r=n%10;
        p=p*r;
        s=s+r;
        n=n/10;
    }
    if(s>=p)
    {
        printf("%d",s-p);
    }
    else
    {
        printf("%d",p-s);
    }
    return 0;
}