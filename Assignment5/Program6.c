#include<stdio.h>

float Percentage(int iNo1,int iNo2)
{
float fpercentage = 0.0f;
if((iNo2< 0) || (iNo1 < 0) || (iNo2 > iNo1))
{
    printf("Invalid input\n");
    return fpercentage;
}


fpercentage = (((float)iNo2 / (float) iNo1)*100);

return fpercentage;

}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    float fRet = 0.0;
    printf("Please enter total marks\n");
    scanf("%d",&iValue1);
    printf("Please enter obtained marks\n");
    scanf("%d",&iValue2);
    fRet = Percentage(iValue1,iValue2);
    printf("Percentage is : %f \n",fRet);
    return 0;
}