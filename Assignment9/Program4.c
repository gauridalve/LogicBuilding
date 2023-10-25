#include<stdio.h>
 
 double FhtoCs(float fTemp)
 {
int iCel = 0;
iCel = (fTemp - 32)*(5/9) ;
return iCel ;
 }
 int main()
 {
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf(" Fahrenheit in celcius is: %f\n",dRet);

    return 0;
 }