#include <stdio.h>
void main()
{
    int i,n=100;
    for (i=1;i<=100;i++)
    {
        if (i%2==0 && i%3==0 && i%6!=0)
        printf("\n%d",i);  
    }

}