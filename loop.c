#include <stdio.h>
int main()
{
    int k=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("%d",k++);
        }
        printf("\n");
    }
    return 0;
}