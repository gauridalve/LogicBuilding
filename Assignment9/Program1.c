#include<stdio.h>

double CircleArea(float fRadius)
{
float fArea = 0;
fArea= 3.14 * fRadius * fRadius;
return fArea ;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area is %f\n",dRet);

    return 0;
}
