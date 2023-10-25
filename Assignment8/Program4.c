#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
 for(iCnt=1;iCnt<=iNo;iCnt++)
{

}
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d \n",iRet);

    return 0;
}