#include <stdio.h>
int main()
{  int pop=100000;
    for(int i=0;i<=9;i++)
    {
        pop=pop*1.10;
        printf("%d",pop);
        printf("\n");
    }
    return 0;
}