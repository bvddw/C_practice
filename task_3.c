/*
8 . . . . . . . .
7 . . . . . . . .
6 . . . . . . . .
5 . . . . . . . .
4 . . . . . . . .
3 . . . . . . . .
2 . . . . . . . .
1 . . . . . . . .
  1 2 3 4 5 6 7 8
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    printf("Enter first pair of coordinates (a, b): ");
    scanf("%d %d", &a, &b);
    printf("Enter first pair of coordinates (c, d): ");
    scanf("%d %d", &c, &d);
    // ROOK
    if ((a == c) || (b == d))
        printf("If the rook is on square (%d, %d), then it attacks square (%d, %d).\n", a, b, c ,d);
    else
        printf("If the rook is on square (%d, %d), then it does not attack square (%d, %d).\n", a, b, c ,d);
    printf("\n");
    // BISHOP 
    if ((a - b == c - d) || (a + b == c + d))
        printf("If the bishops is on square (%d, %d), then it attacks square (%d, %d).\n", a, b, c ,d);
    else
        printf("If the bishops is on square (%d, %d), then it does not attack square (%d, %d).\n", a, b, c ,d);
    printf("\n");
    // KING
    if (abs(a - c) <= 1 && abs(b - d) <= 1)
        printf("The king can stand on square (%d, %d) from square (%d, %d).\n", a, b, c, d);
    else    
        printf("The king cannot stand on square (%d, %d) from square (%d, %d).\n", a, b, c, d);
    printf("\n");
    // QUEEN
    if ((a == c) || (b == d) || (a - b == c - d) || (a + b == c + d))
        printf("If the queen is on square (%d, %d), then it attacks square (%d, %d).\n", a, b, c ,d);
    else
        printf("If the queen is on square (%d, %d), then it does not attack square (%d, %d).\n", a, b, c ,d);
    printf("\n");
    // WHITE PAWN
    if (a == c && d == b + 1)
        printf("The white pawn can stand on square (%d, %d) from square (%d, %d) (do not capture the opponent's piece).\n", a, b, c, d);
    else
    {
        if (abs(a - c) == 1 && d == b + 1)
            printf("The white pawn can stand on square (%d, %d) from square (%d, %d) (beat the opponent's piece).\n", a, b, c, d);
        else
            printf("The white pawn cannot stand on square (%d, %d) from square (%d, %d).\n", a, b, c, d);
    }
    printf("\n");
    // BLACK PAWN
    if (a == c && d == b - 1)
        printf("The black pawn can stand on square (%d, %d) from square (%d, %d) (do not capture the opponent's piece).\n", a, b, c, d);
    else
    {
        if (abs(a - c) == 1 && d == b - 1)
            printf("The black pawn can stand on square (%d, %d) from square (%d, %d) (beat the opponent's piece).\n", a, b, c, d);
        else
            printf("The black pawn cannot stand on square (%d, %d) from square (%d, %d).\n", a, b, c, d);
    }
    printf("\n");
    // KNIGHT
    if (abs(a - c) * abs(b - d) == 2)
        printf("The knight can stand on square (%d, %d) from square (%d, %d).\n", a, b, c, d);
    else
        printf("The knight cannot stand on square (%d, %d) from square (%d, %d).\n", a, b, c, d);
    system("pause");
    return 0;
}