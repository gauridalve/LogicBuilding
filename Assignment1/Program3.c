#include<stdio.h>

void Display()
{
    int iCnt = 0;
int i = 5;
    for(iCnt = 1; iCnt <= 5 ; )
    {
        printf("%d\n",iCnt);
        i++;
    }
}
int main()
{
    int iValue = 0;
    Display(iValue);

    return 0;
}