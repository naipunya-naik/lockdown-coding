import java.util.Arrays;
public class MagicSquare
{
public static void main(String []args)
{
  int[][] a = {{1,2,2}, {2,2,1}, {2,1,2}};
  final int n=a.length;
  final int nSquare=n*n;
  final int targetSum=n*(n*n+1)/2;
boolean[] flag= new boolean[n*n];
int row, col, sum;
System.out.println("Original Matrix is:");
for (int i = 0;i< a.length;i++)
{
System.out.println(Arrays.toString(a[i]));
}
// Calculate the sum of each row ... if magic, then equal to targetSum
for(row=0; row< n; row++)
{
sum=0;
System.out.print("row "+row+": ");
for (col=0; col< n; col++)
{
int value = a[row][col];
sum += value;
if (col > 0)
// print plus before all except 1st
System.out.print(" + ");
System.out.print(value);
}
System.out.println(" = "+sum);
if (sum != targetSum)
{
System.out.println("Row sum incorrect : Not a magic Square:");
return;
}
}
// Calculate the sum of the diagonal from Lower Left to Upper Right
sum=0;
System.out.print("diagonal: ");
for (int pos=0; pos< n; pos++)
{
row = n-1 - pos;
col = pos;
int value = a[row][col];
sum += value;
if ( pos > 0 )
// print plus before all except 1st
System.out.print(" + ");
System.out.print(value);
}
System.out.println(" = "+sum);
if ( sum != targetSum )
{
System.out.println("Diagonal is incorrect : Not a magic Square:");
return;
}
// Lastly, we check that every number from 1 to n is represented
for ( row=0; row< n; row++ )
{
for ( col=0; col< n; col++ )
{
int num = a [ row ][ col ];
if ( n < 1 || num > nSquare )
{
System.out.println("Number out of range : Not a magic Square:");
return;
}
if ( flag [ num-1 ])
{
System.out.println("Duplicate number : Not a magic Square :");
return;
}
flag[num-1] = true;
}
}
System.out.println("The Given Matrix is MagicSquare ");
}
}
