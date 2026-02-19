#include <stdio.h>
int main()
{
    //greatest of 3 numbers
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        printf("Greatest number is %d", a);
    else if (b >= a && b >= c)
        printf("Greatest number is %d", b);
    else
        printf("Greatest number is %d", c);

    return 0;
}
