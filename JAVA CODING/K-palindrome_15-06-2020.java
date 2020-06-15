import java.util.*;
import java.util.Scanner;
public class Main
{
    public static int isKPalindrome(String X, int m, String Y, int n)
	  {
		  if (m == 0 || n == 0)
	  	{
			return n + m;
		  }
		  if (X.charAt(m - 1) == Y.charAt(n - 1)) 
		  {
			return isKPalindrome(X, m - 1, Y, n - 1);
		  }
	  	int x = isKPalindrome(X, m - 1, Y, n);
		  int y = isKPalindrome(X, m, Y, n - 1);
		  return 1 + Integer.min(x, y);
	}
	public static void main(String[] args)
	{
	    Scanner sc= new Scanner(System.in);  
        String str= sc.next();   
        System.out.println("ENTER THE STRING: "+str);
        System.out.println("Enter the k value: ");  
		  int K=sc.nextInt();
	  	String rev = new StringBuilder(str).reverse().toString();
		  if (isKPalindrome(str, str.length(), rev, str.length()) <= 2 * K) {
			System.out.println("Yes ,The String is K-Palindrome");
		} 
    else
    {
			System.out.println("No ,The String is not a K-Palindrome");
		}
	}
}
