#include <stdio.h>

int main()
{
    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 11; j++)
        {
            printf("%3d ", i * j);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}