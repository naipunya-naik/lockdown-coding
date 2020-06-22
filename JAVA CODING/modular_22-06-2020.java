import java.io.*; 
import java.util.Scanner;
public class modular { 
	static int power(int x, int y, int p) 
	{ 
		int res = 1;	 
		x = x % p; 
	if (x == 0) return 0;
    	while (y > 0) 
		{ 
			if((y & 1)==1) 
				res = (res * x) % p; 
			y = y >> 1; 
			x = (x * x) % p; 
		} 
		return res; 
	} 
	public static void main(String args[]) 
	{ 
	    int x,y,p;
	    Scanner scanner= new Scanner(System.in);
        System.out.println("Enter x,y,p: ");
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();
		System.out.println("Power is " + power(a,b,c)); 
	} 
} 
