#include<stdio.h>

int Factorial(int iNo)
{
int iCnt = 0;

  printf("Factors of %d are : \n",iNo);
  
  for(iCnt = 1; iCnt < iNo; iCnt++)
  {
    if((iNo % iCnt) == 0)
    {
        printf("%d\n",iCnt);
    }
  }
}
int main()
{
    int iValue = 0,iRet =0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d",iRet);
    
    return 0;
}  