#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkEqual(int iNo,int iNo2)
{
if(iNo = iNo2)
    {
        return TRUE;
    } else {
        return FALSE;
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;
    printf("Please enter two numbers\n");
    scanf("%d %d",&iValue1,&iValue2);
    bRet = ChkEqual(iValue1, iValue2);
    if(bRet == 0)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not equal\n");
    }
    return 0;

}