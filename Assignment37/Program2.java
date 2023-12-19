import java.util.*;

class Program2
{
    public static boolean CheckBit(int iNo)
    {
      int iMask = 131088;
     int iResult = 0;

     iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
    }
    public static void main(String arg[])
    {
     Scanner sobj = new Scanner(System.in);
     int iNo = 0;
     boolean bRet = false;


     System.out.println("Enter number :");
     iNo = sobj.nextInt();
     
     bRet = CheckBit(iNo);


    if(bRet == true)
    {
        System.out.println("5th & 18th bit is ON");
    }
    else
    {
        System.out.println("bits are OFF");
    
    
    
    }
}
}