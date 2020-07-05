
#include<stdio.h>
#include<math.h>
int main()
{
   int a[10][10],b[10][10];
   int n,m,i,j,f=0;
   printf("enter the number of rows and columns of the matrix: ");
   scanf("%d %d",&n,&m);
   printf("enter the elements in the marix:\n");
   for(i=0;i<n;i++)
   for(j=0;j<m;j++)
   {
       scanf("%d",&a[i][j]);
   }
   printf("the matrix is:\n");
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       printf("%d ",a[i][j]);
       printf("\n");
   }
   for(i=0;i<n;i++)
   {
      for(j=0;j<m;j++)
      b[i][j]=a[j][i];
   }
   printf("the transpose of the matrix is:\n");
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       printf("%d ",b[i][j]);
       printf("\n");
   }
   for(i=0;i<n;i++)
   {
     for(j=0;j<m;j++)
     {
       if(a[i][j]!=b[i][j])
         {
           f=1;
           break;
         }
     }
   }
   if(f==0)
   {
       printf("the matrix is symmetic");
   }
   else
   {
       printf("the matix is not symmetic");
   }
}

