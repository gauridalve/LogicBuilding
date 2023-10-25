#include<stdio.h>

double RectArea(float fWidth,float fHeight)
{
 float fRect = 0;
fRect= fWidth * fHeight;
return fRect ;
}
int main()
{
    float fValue1 = 0.0,fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width\n");
    scanf("%f",&fValue1);

    printf("Enter height\n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area is %f\n",dRet);

    return 0;
}