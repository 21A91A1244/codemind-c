#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,s=0,sq;
    scanf("%d",&a);
    sq=a*a;
    while(sq!=0)
    {
        b=sq%10;
        s=s+b;
        sq=sq/10;
    }
    if(s==a)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    
}