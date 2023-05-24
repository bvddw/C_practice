#include <stdio.h>

int main()
{
    int number;
    int max = -1, indmax, min = 11, indmin;
    printf("Enter the number: ");
    scanf("%d", &number);
    int ind = 1;
    while (number > 0)
    {
        if (max < number % 10)
        {
            max = number % 10;
            indmax = ind;
        }
        if (min > number % 10)
        {
            min = number % 10;
            indmin = ind;
        }
        number = number / 10;
        ind++;
    }
    indmax = ind - indmax;
    indmin = ind - indmin;
    if (indmax < indmin)
    {
        printf("The maximum digit is to the left of the minimum.\n");
    }
    else
        printf("The maximum digit is to the right of the minimum.\n");
    system("pause");
    return 0;
}