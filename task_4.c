#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter size of first side: ");
    scanf("%d", &a);
    printf("Enter size of second side: ");
    scanf("%d", &b);
    printf("Enter size of third side: ");
    scanf("%d", &c);
    if ((a >= b + c) || (b >= a + c) || (c >= a + b))
        printf("A triangle with such sides does not exist.\n");
    else
    {
        printf("A triangle with such sides exists.\n");
        if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b))
            printf("The triangle is rectangular.\n");
        else
            printf("The triangle is not rectangular.\n");
    }
    system("pause");
    return 0;
}
