#include <stdio.h>
int main() {
   int n;int a[n][n],b[n][n],diff[n][n],i,j;int trace;
   printf("Enter the number of rows and columns: \n");
   scanf("%d",&n);

    printf("Enter elements of matrix:\n");
    for (i = 0; i < n; ++i)
        for (j = 0; j < n; ++j) 
		{
        
            scanf("%d", &a[i][j]);
        }

    for (i = 0; i < n; ++i)
        for (j = 0; j < n; ++j) 
		{
           if(i==j)
           	trace=trace+a[i][j];
		
        }

  printf("trace=",trace);
    return 0;
}
