import java.io.*;
import java.lang.*;
import java.util.*;
import java.math.*;

class A{
    public static void main(String args[]) throws Exception
    {
        Scanner sc = new Scanner(System.in);
        int ncases = sc.nextInt();
        for(int c = 1; c <= ncases; c++)
        {
            String input = sc.next();
            String result = input.substring(0,1);
            for(input = input.substring(1); input.length()>0; input=input.substring(1))
            {
                if(input.charAt(0)<result.charAt(0))
                    result+=input.substring(0,1);
                else result=input.substring(0,1)+result;
            }
            System.out.println("Case #"+c+": "+result);
        }
        return;
    }
}