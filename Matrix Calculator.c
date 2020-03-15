#include<stdio.h>
#include<conio.h>

int i,j,k,det,choice,choice2;
int a[3][3],b[3][3],c[3][3],I[3][3],d[3][3];
int m=3,n=3;
int minor1,minor2,minor3;

void main()
{
 printf("\t\t-----------------------------------------------------------------------------------------------");
 printf("\n\t\t|                             Welcome to the matrix calculator.                               |\n");
 printf("\t\t-----------------------------------------------------------------------------------------------\n");
 printf("\n\nThe matrix A is:\n");
 for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
             scanf("%d",&a[i][j]);
         }
     }

 minor1=((a[1][1]*a[2][2])-(a[2][1]*a[1][2]));
 minor2=((a[1][0]*a[2][2])-(a[1][2]*a[2][0]));
 minor3=((a[1][0]*a[2][1])-(a[1][1]*a[2][0]));

 det=(a[0][0]*minor1)-(a[0][1]*minor2)+(a[0][2]*minor3);

 printf("\nThere is a list of operation that can be performed on the given matrix:\n\n");

while(1)
{
     printf("\t1 Determinant of matrix.");
     printf("\n\t2 Addition of matrices.");
     printf("\n\t3 Subtraction of matrices.");
     printf("\n\t4 Multiplication of matrices.");
     printf("\n\t5 Singularity of matrix.");
     printf("\n\t6 Transpose of matrix.");
     printf("\n\t7 Inverse of matrix.");
     printf("\n\t8 Other properties.");
     printf("\n\t9 Exit.");-
     printf("\n\nEnter a choice: ");
     scanf("%d",&choice);
     switch(choice)
     {
         case 1:
         {
              printf("\t\t-----------------------------------------------------------------------------------------------");
              printf("\n\t\t|                                  Determinant of matrix.                                     |");
              printf("\n\t\t-----------------------------------------------------------------------------------------------");
              printf("\n\t\tDeterminant of matrix A is: %d\n\n",det);
              continue;
         }
         case 2:
         {
              printf("\t\t-----------------------------------------------------------------------------------------------");
              printf("\n\t\t|                                   Addition of matrices.                                     |");
              printf("\n\t\t-----------------------------------------------------------------------------------------------");
              printf("\n\t\t\t\tFor addition of 2 matrices another matrix B is required:\n");
              for(i=0;i<m;i++)
              {
                   for(j=0;j<n;j++)
                   {
                        scanf("%d",&b[i][j]);
                   }
              }
              for(i=0;i<m;i++)
              {
                   for(j=0;j<n;j++)
                   {
                        c[i][j]=a[i][j]+b[i][j];
                   }
              }
              printf("\nFrom the formula:");
              printf("\n\t\t\t\t\tC=A+B");
              printf("\nMatrix C is:\n");
              for(i=0;i<m;i++)
              {
                   for(j=0;j<n;j++)
                   {
                        printf("%d ",c[i][j]);
                   }
                   printf("\n");
              }
              printf("\n\n");
              continue;
         }
         case 3:
         {
              printf("\t\t-----------------------------------------------------------------------------------------------");
              printf("\n\t\t|                                Subtraction of matrices.                                     |");
              printf("\n\t\t-----------------------------------------------------------------------------------------------");
              printf("\n\t\t\tFor subtraction of 2 matrices enter another matrix B is required:\n");
              for(i=0;i<m;i++)
              {
                   for(j=0;j<n;j++)
                   {
                        scanf("%d",&b[i][j]);
                   }
              }
              for(i=0;i<m;i++)
              {
                   for(j=0;j<n;j++)
                   {
                        c[i][j]=a[i][j]-b[i][j];
                   }
              }
              printf("\nFrom the formula:");
              printf("\n\t\t\t\C=A-B");
              printf("\nMatrix C is:\n");
              for(i=0;i<m;i++)
              {
                   for(j=0;j<n;j++)
                   {
                        printf("%d ",c[i][j]);
                   }
                   printf("\n");
              }
              printf("\n\n");
              continue;
         }
         case 4:
         {
              printf("\t\t-----------------------------------------------------------------------------------------------");
              printf("\n\t\t|                               Multiplication of matrices.                                   |");
              printf("\n\t\t-----------------------------------------------------------------------------------------------");
              printf("\n\t\tFor multiplication of 2 matrices enter another matrix B is required:\n");
              for(i=0;i<m;i++)
              {
                   for(j=0;j<n;j++)
                   {
                        scanf("%d",&b[i][j]);
                   }
              }
              for(i=0;i<m;i++)
              {
                   for(j=0;j<n;j++)
                   {
                        c[i][j]=0;
                        for(k=0;k<3;k++)
                        {
                             c[i][j]=c[i][j]+(a[i][k]*b[k][j]);

                        }
                   }
              }
              printf("\nMartix c:\n");
              for(i=0;i<m;i++)
              {
                   for(j=0;j<n;j++)
                   {
                        printf("%d ",c[i][j]);
                   }
                   printf("\n");
              }
              printf("\n\n");
              continue;
         }
         case 5:
          {
             printf("\t\t-----------------------------------------------------------------------------------------------");
             printf("\n\t\t|                                  Determinant of matrix.                                     |");
             printf("\n\t\t-----------------------------------------------------------------------------------------------");
             if(det!=0)
             {
                 printf("\n\t\t\t\t\t\tThe matrix is singular\n");
             }
             else
             {
                 printf("\n\t\t\t\tThe matrix is non-singular\n");
             }
             continue;
         }
         case 6:
         {
             printf("\t\t-----------------------------------------------------------------------------------------------");
             printf("\n\t\t|                                   Transpose of matrix.                                      |");
             printf("\n\t\t-----------------------------------------------------------------------------------------------");
             printf("\nThe transposed matrix A':\n");
             for(i=0;i<m;i++)
              {
                   for(j=0;j<n;j++)
                   {
                        printf("%d ",a[j][i]);
                   }
                   printf("\n");
              }
              printf("\n\n");
              continue;
         }
         case 7:
         {
              printf("\t\t-----------------------------------------------------------------------------------------------");
              printf("\n\t\t|                                    Inverse of matrix.                                       |");
              printf("\n\t\t-----------------------------------------------------------------------------------------------");
              if(det==0)
              {
                  printf("\n\nThe matrix is non-singular, hence its inverse does not exists\n\n");
              }
              else
              {
                   c[0][0]=(a[1][1]*a[2][2])-(a[2][1]*a[1][2]);
                   c[0][1]=(-1)*((a[0][1]*a[2][2])-(a[1][2]*a[2][0]));
                   c[0][1]=(a[1][0]*a[2][1])-(a[1][1]*a[2][0]);
                   c[1][0]=(-1)*((a[0][1]*a[2][2])-(a[0][2]*a[2][1]));
                   c[1][1]=(a[0][0]*a[2][2])-(a[0][2]*a[2][0]);
                   c[1][2]=(-1)*((a[0][0]*a[2][1])-(a[0][1]*a[2][0]));
                   c[2][0]=(a[0][1]*a[1][2])-(a[0][1]*a[0][2]);
                   c[2][1]=(-1)*((a[0][0]*a[1][2])-(a[0][2]*a[1][0]));
                   c[2][2]=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
                   printf("\n\nThe inverse of matrix A is A':\n\n");
                   for(i=0;i<m;i++)
                   {
                        for(j=0;j<n;j++)
                        {
                             printf("%d ",(c[i][j])/det);
                        }
                        printf("\n");
                   }
              }
              printf("\n\n");
              continue;
         }
         case 8:
         {
              printf("\t\t-----------------------------------------------------------------------------------------------");
              printf("\n\t\t|                               Other properties of matrix.                                   |");
              printf("\n\t\t-----------------------------------------------------------------------------------------------");
              printf("\n\n\t\tOther properties:\n");
              printf("\n\t1 Triangular matrix.");
              printf("\n\t2 Orthogonal matrix.");
              printf("\n\t3 Symmetric or skew symmetric matrix.");
              printf("\n\t4 A*B!=B*A");
              printf("\n\t5 A+B=B+A");
              printf("\n\nEnter a choice: ");
              scanf("%d",&choice2);
              switch (choice2)
              {
                  case 1:
                  {
                      printf("\t\t-----------------------------------------------------------------------------------------------");
                      printf("\n\t\t|                                    Triangular matrix.                                       |");
                      printf("\n\t\t-----------------------------------------------------------------------------------------------");
                      if(a[0][1]==0&&a[0][2]==0&&a[1][2]==0)
                      {
                          printf("\n\n\t\t\t\tThe matrix is upper triangular matrix");
                      }
                      if(a[1][0]==0&&a[2][0]==0&&a[2][1]==0)
                      {
                          printf("\n\n\t\t\t\tThe matrix is lower triangular matrix");
                      }
                      if(a[0][1]==0&&a[0][2]==0&&a[1][2]==0&&a[1][0]==0&&a[2][0]==0&&a[2][1]==0)
                      {
                          printf("\n\n\t\t\t\tThe matrix is a diagonal matrix");
                      }
                      continue;
                  }
                  case 2:
                  {
                      int c;
                      printf("\t\t-----------------------------------------------------------------------------------------------");
                      printf("\n\t\t|                                    Orthogonal matrix.                                       |");
                      printf("\n\t\t-----------------------------------------------------------------------------------------------");
                      printf("\n\If the multiplication of matrix A and its transpose A' is a identity matrix then matrix A is orthogonal");
                      printf("\n\nThe transposed matrix A':\n");
                      for(i=0;i<m;i++)
                      {
                          for(j=0;j<n;j++)
                          {
                               printf("%d ",a[j][i]);
                          }
                          printf("\n");
                      }
                      for(i=0;i<3;i++)
                      {
                           for(j=0;j<3;j++)
                           {
                                if(i==j)
                                {
                                     I[i][j]=1;
                                }
                                else
                                {
                                     I[i][j]=0;
                                }

                            }
                       }
                       for(i=0;i<m;i++)
                       {
                            for(j=0;j<n;j++)
                            {
                                 c[i][j]=0;
                                 for(k=0;k<3;k++)
                                 {
                                      c[i][j]=c[i][j]+(a[i][k]*a[k][i]);
                                 }
                            }
                      }
                      for(i=0;i<3;i++)
                      {
                           for(j=0;j<3;j++)
                           {
                                if(c[i][j]==I[i][j])
                                {
                                     c++;
                                }
                           }
                      }
                      if(c==9)
                      {
                          printf("\n\n\t\t\t\tThe matrix A is orthogonal\n\n.");
                      }
                      else
                      {
                          printf("\n\n\t\t\t\tThe matrix A is not orthogonal\n\n.");
                      }
                      continue;
                  }
                  case 3:
                  {
                         int c,d;
                         printf("\t\t-----------------------------------------------------------------------------------------------");
                         printf("\n\t\t|                             Symmetric and Skew symmetric matrix.                            |");
                         printf("\n\t\t-----------------------------------------------------------------------------------------------");
                         for(i=0;i<3;i++)
                        {
                            for(j=0;j<3;j++)
                            {
                                 if(c[i][j]==d[i][j])
                                 {
                                      c++;
                                 }
                            }
                       }
                         printf("\n\nThe transposed matrix A':\n");
                         for(i=0;i<m;i++)
                            {
                                 for(j=0;j<n;j++)
                                 {
                                      printf("%d ",a[j][i]);
                                 }
                                 printf("\n");
                            }
                         for(i=0;i<m;i++)
                            {
                                 for(j=0;j<n;j++)
                                 {
                                      if(a[i][j]==a[j][i])
                                      {
                                          c++;
                                      }
                                      if(((-1)*a[j][i])==a[i][j])
                                      {
                                          d++;
                                      }
                                 }
                                 printf("\n");
                            }
                            if(c==9)
                            {
                                printf("\n\n\t\t\tMatrix A is a symmetric matrix");
                            }
                            if(d==9)
                            {
                                printf("\n\n\t\t\tMatrix A is a skew symmetric matrix");
                            }
                            else
                            {
                                printf("\n\n\t\t\tMatrix A is neither symmetric nor skew symmetric matrix");
                            }
                    }
                    case 4:
                    {
                         printf("\t\t-----------------------------------------------------------------------------------------------");
                         printf("\n\t\t|                               A*B!=B*A property of matrix.                                  |");
                         printf("\n\t\t-----------------------------------------------------------------------------------------------");
                         for(i=0;i<m;i++)
                         {
                              for(j=0;j<n;j++)
                              {
                                   scanf("%d",&b[i][j]);
                              }
                         }
                         for(i=0;i<m;i++)
                         {
                              for(j=0;j<n;j++)
                              {
                                   c[i][j]=0;
                                   for(k=0;k<3;k++)
                                   {
                                        c[i][j]=c[i][j]+(a[i][k]*b[k][j]);

                                   }
                             }
                        }
                        printf("\nMatrix D:\n");
                        for(i=0;i<m;i++)
                        {
                            for(j=0;j<n;j++)
                            {
                                 printf("%d ",c[i][j]);
                            }
                            printf("\n");
                        }
                        for(i=0;i<m;i++)
                         {
                              for(j=0;j<n;j++)
                              {
                                   scanf("%d",&b[i][j]);
                              }
                         }
                         for(i=0;i<m;i++)
                         {
                              for(j=0;j<n;j++)
                              {
                                   d[i][j]=0;
                                   for(k=0;k<3;k++)
                                   {
                                        d[i][j]=d[i][j]+(b[i][k]*a[k][j]);

                                   }
                             }
                        }
                        printf("\nMatrix D:\n");
                        for(i=0;i<m;i++)
                        {
                            for(j=0;j<n;j++)
                            {
                                 printf("%d ",d[i][j]);
                            }
                            printf("\n");
                        }
                        for(i=0;i<3;i++)
                        {
                            for(j=0;j<3;j++)
                            {
                                 if(c[i][j]==d[i][j])
                                 {
                                      c++;
                                 }
                            }
                       }
                       if(c==9)
                       {
                           printf("\n\n\t\t\tThe matrices A & B do not satisfies the property A*B!=B*A");
                           if(b[i][j]==0)
                           {
                               printf("\n\n\t\t\t\tThe matrix B is a null matrix");
                           }
                       }
                       else
                       {
                           printf("\n\n\t\t\tThe matrices A & B satisfies the property A*B!=B*A");
                       }
                       continue;
                    }
                    case 5:
                    {
                         printf("\t\t-----------------------------------------------------------------------------------------------");
                         printf("\n\t\t|                               A+B=B+A property of matrix.                                   |");
                         printf("\n\t\t-----------------------------------------------------------------------------------------------");
                         int c;
                         printf("\n\t\t\t\tFor addition of 2 matrices another matrix B is required:\n");
                         for(i=0;i<m;i++)
                         {
                              for(j=0;j<n;j++)
                              {
                                   scanf("%d",&b[i][j]);
                              }
                         }
                         for(i=0;i<m;i++)
                         {
                              for(j=0;j<n;j++)
                              {
                                   c[i][j]=a[i][j]+b[i][j];
                              }
                         }
                         printf("\nFrom the formula:");
                         printf("\n\t\t\t\t\tC=A+B");
                         printf("\nMatrix C is:\n");
                         for(i=0;i<m;i++)
                         {
                              for(j=0;j<n;j++)
                              {
                                   printf("%d ",c[i][j]);
                              }
                              printf("\n");
                         }
                         printf("\n\t\t\t\tFor addition of 2 matrices enter another matrix B is required:\n");
                         for(i=0;i<m;i++)
                         {
                              for(j=0;j<n;j++)
                              {
                                   scanf("%d",&b[i][j]);
                              }
                         }
                         for(i=0;i<m;i++)
                         {
                              for(j=0;j<n;j++)
                              {
                                   d[i][j]=b[i][j]+a[i][j];
                              }
                         }
                         printf("\nFrom the formula:");
                         printf("\n\t\t\t\t\tC=A+B");
                         printf("\nMatrix D is:\n");
                         for(i=0;i<m;i++)
                         {
                              for(j=0;j<n;j++)
                              {
                                   printf("%d ",d[i][j]);
                              }
                              printf("\n");
                         }
                         for(i=0;i<3;i++)
                         {
                              for(j=0;j<3;j++)
                              {
                                   if(c[i][j]==d[i][j])
                                   {
                                        c++;
                                   }
                              }
                        }
                        if(c==9)
                        {
                            printf("\n\n\t\t\t\tThe matrices A & B satisfies the property A+B=B+A");
                        }
                        continue;
                    }
              }
              break;
         }
         case 9:
         {
             printf("\t\t-----------------------------------------------------------------------------------------------");
             printf("\n\t\t|                                          Exit.                                              |");
             printf("\n\t\t-----------------------------------------------------------------------------------------------");
             printf("\n\n\t\t\t\tYou are exiting now...\n\n\n");
             printf("\n\n");

         }
         continue;
     }
     break;
 }
}
