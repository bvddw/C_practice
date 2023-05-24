#include <stdio.h>
#include <math.h>

int main()
{
    double cosineValue;
    double angleInRadians;
    double angleInDegrees;
    double i = 3.2;
    int moment = 1;
    cosineValue = 3 / 4.5;
    angleInRadians = acos(cosineValue);
    angleInDegrees = angleInRadians * (180.0 / M_PI);
    printf("In the moment %d angle is: %f degree.\n", moment, angleInDegrees);
    while (i < 4.5)
    {   
        cosineValue = i / 4.5;
        angleInRadians = acos(cosineValue);
        angleInDegrees = angleInRadians * (180.0 / M_PI);
        printf("In the moment %d angle is: %f degree.\n", ++moment, angleInDegrees);
        i = i + 0.2;
    }
    printf("In the moment %d angle is: 0 degree.\n", ++moment);
    system("pause");
    return 0;
}