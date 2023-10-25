#include<stdio.h>
 
 double SquareMeter(int iValue)
 {
int iSquare = 0;
iSquare =  (iValue = 0.0929) ;
return iSquare ;
 }
 int main()
 {
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf(" area is: %f\n",dRet);

    return 0;
 }