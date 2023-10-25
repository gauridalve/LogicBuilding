#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt,f=0;
    
 for(iCnt=1;iCnt<=iNo;iCnt++)
 {
      f=f*iCnt;

 }
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d \n",iRet);

    return 0;
}