#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Enter any two numbers: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("The swapped variables are a:%d and b:%d",a,b);

    return 0;
}
