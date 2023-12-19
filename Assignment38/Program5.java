import java.util.*;

class Program5
{
    public static int OnBit(int iNo)
    {
      int iMask = 0X00000008;
     int iResult = 0;

     iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return (iNo ^ iMask);
    }
    else
    {
        return iNo;
    }
    }
    public static void main(String arg[])
    {
     Scanner sobj = new Scanner(System.in);
     int iNo = 0;
     int iRet = 0;


     System.out.println("Enter number :");
     iNo = sobj.nextInt();
     
     iRet = OnBit(iNo);

     System.out.println("Updated number is : "+iRet);
    
    }
}