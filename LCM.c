#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=(a>b)?a:b;
    while(1)
    {
        if(c%a==0 && c%b==0)
        {
            printf("%d",c);
            break;
        }
        ++c;
    }
}