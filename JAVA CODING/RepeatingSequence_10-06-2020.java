import java.util.*;
import java.util.Scanner;
public class RepeatingSequence {  
    public static String lcp(String s, String t){  
        int n = Math.min(s.length(),t.length());  
        for(int i = 0; i < n; i++){  
            if(s.charAt(i) != t.charAt(i)){  
                return s.substring(0,i);  
            }  
        }  
        return s.substring(0,n);  
    }  
   public static void main(String[] args) 
   {  
            Scanner sc= new Scanner(System.in); 
            System.out.print("Enter a string: ");  
            String str= sc.nextLine();           
            System.out.println("You have entered: "+str);             
            String lrs="";  
             int n = str.length();  
             for(int i = 0; i < n; i++){  
            for(int j = i+1; j < n; j++){  
                String x = lcp(str.substring(i,n),str.substring(j,n));  
                if(x.length() > lrs.length()) lrs=x;  
            }  
        }  
        System.out.println("Longest Repeating Sequence: "+lrs);  
    }  
} 
