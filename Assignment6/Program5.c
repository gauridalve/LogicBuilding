#include<stdio.h>

void MultipleDisplay(int iNo)
{
int iCnt = 0;

   for(iCnt = iNo; iCnt <= (iNo* 5); iCnt++)
   {
    printf("%d\t",iCnt);
   }

}
int main()
{
    int iValue = 0;

    printf("Enter number\n");

    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}