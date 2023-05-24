#include <stdio.h>
#include <string.h>

int main()
{
    int a, b, c, d;
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);
    printf("Enter number 3: ");
    scanf("%d", &c);
    printf("Enter number 4: ");
    scanf("%d", &d);
    char stra[10], strb[10], strc[10], strd[10], result[40] = "";
    sprintf(stra, "%d", a);
    sprintf(strb, "%d", b);
    sprintf(strc, "%d", c);
    sprintf(strd, "%d", d);
    strcat(result, stra);
    strcat(result, " ");
    strcat(result, strb);
    strcat(result, " ");
    strcat(result, strc);
    strcat(result, " ");
    strcat(result, strd);
    printf("Your result: %s\n", result);
    system("pause");
    return 0;
}