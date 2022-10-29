#include<stdio.h>
#include<math.h>
int main()
{
    int i,a;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        if(a==i*i)
        {
            printf("True");
            return 0;
        }
    }
    printf("False");
}