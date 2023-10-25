#include<stdio.h>

void Number(int iNo)
{
if(iNo<=50)
    {
        printf("small\n",iNo);
    } 
    if(iNo<100)
    {
        printf("Medium\n",iNo);
    } 
    if(iNo>100)
    {
        printf("Greater\n",iNo);
    } 
    
    }

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
    
}