import java.util.*;

class Program6
{
    public static int OnBit(int iNo,int iPos)
    {
      int iMask = 0X00000001;
      int iResult = 0;

      iMask = iMask << (iPos - 1);
      iResult = iNo ^ iMask;
      
        return iResult;
    
    }
    public static void main(String arg[])
    {
     Scanner sobj = new Scanner(System.in);
     int iNo = 0,iPos = 0;
     int iRet = 0;


     System.out.println("Enter number :");
     iNo = sobj.nextInt();

     System.out.println("Enter the position :");
     iPos = sobj.nextInt();
     
     iRet = OnBit(iNo,iPos);

     System.out.println("Updated number is : "+iRet);
    
    }
}