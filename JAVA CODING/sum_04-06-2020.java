import java.io.*;
import java.util.Scanner;
class Sum
{
	public static void main(String[] args)
	{
		int sum,a,b,c;
		Scanner s=new Scanner(System.in);
		System.out.println("Enter the values of a,b and c");
		a=s.nextInt();
		b=s.nextInt();
		c=s.nextInt();
		sum=a+b+c;
		System.out.println(sum);
	}
}
