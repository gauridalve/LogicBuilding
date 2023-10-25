#include<stdio.h>

int RangeSumEven(int iStart , int iEnd)
{
int iCnt = 0;
int iSum = 0;
for (iCnt = iStart; iCnt<= iEnd; iCnt+=2) 
{
   iSum += iCnt;

    if(iStart%2!=0)   
     {
        iStart++;
    }
}    
}

int main()
{
    int iValue1 = 0, iValue2 = 0 , iRet = 0;

    printf("Enter starting point\n");
    scanf("%d\n",&iValue1);

    printf("Enter ending point\n");
    scanf("%d\n",&iValue2);

   iRet = RangeSumEven(iValue1,iValue2);

printf("Addition is :%d\n",iRet);

   return 0; 
}