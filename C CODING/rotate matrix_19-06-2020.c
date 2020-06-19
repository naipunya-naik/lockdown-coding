#include<stdio.h>
void main()
{
  int a[1000][1000],b[1000][1000],i,j,k=0,m,n,D;
  printf("\nEnter the row and column of the matrix");
  scanf("%d %d",&m,&n);
  printf("\nEnter the  matrix\n");
  for(i=0;i<m;i++)
      for(j=0;j<n;j++)
           scanf("%d",&a[i][j]);
 printf(" Given matrix is\n");
  for(i=0;i<m;i++){
      printf("\n");
      for(j=0;j<m;j++){
           printf("%d\t",a[i][j]);
      }
  }   
  printf("\n\nMatrix after 90 degrees Clockwise rotation \n");
        for(i=0;i<n;i++)
        {
            for(j=m-1;j>=0;j--)
        {
            printf("%d  ",a[j][i]);
        }
         printf("\n");
        }
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
           b[i][j]=0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                    b[i][j]=a[j][i];
            }
        }
 printf("\n\nMatrix after 90 degrees AntiClockwise rotation \n" );
         for(i=0;i<m;i++)
        {
            printf("\n");
        for(j=0;j<n;j++)
        {
           printf("%d\t",b[i][j]);
        }
        }
}

