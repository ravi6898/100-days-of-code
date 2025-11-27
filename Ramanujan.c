#include <stdio.h>
int main()
{  int c=0;
    for(int k=1;k<=16000;k++)
    {
    for (int i=1;i<=20;i++)
    {
        for(int j=i+1;j<=20;j++)
        {
            if((i*i*i)+(j*j*j) == k)
            {
            c++;
            }
        }
       
    }
    if(c>1)
    {
      printf("%d\n", k);
    }
    c=0;
    }
    return 0;
}