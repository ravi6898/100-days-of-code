#include <stdio.h>
int main()
{
    char name[50];
    printf("Please Enter your name:");
    fgets(name,50,stdin);
    int x;
    printf("Enter your age:");
    scanf("%d", &x);
    printf("Your name: %s", name);
    printf("Your age: %d", x);
    return 0;
}