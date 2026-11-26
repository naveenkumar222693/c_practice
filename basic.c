#include <stdio.h> 
 
int main()  
{ 
    int A[10][10], T[10][10]; 
    int row, col, i, j; 
 
    // Input size of matrix 
    printf("Enter number of rows and columns: "); 
    scanf("%d%d", &row, &col); 
 
    // Input matrix elements 
    printf("Enter elements of matrix:\n"); 
    for(i = 0; i < row; i++)  
  { 
        for(j = 0; j < col; j++)  
      { 
            scanf("%d", &A[i][j]); 
        } 
    } 
 
    // Transpose logic: swap rows with columns 
    for(i = 0; i < row; i++) 
   { 
        for(j = 0; j < col; j++)  
      { 
            T[j][i] = A[i][j]; 
        } 
    } 
 
    // Display transposed matrix 
    printf("Transpose of the matrix:\n"); 
    for(i = 0; i < col; i++)  
   { 
        for(j = 0; j < row; j++)  
      { 
            printf("%d ", T[i][j]); 
        } 
        printf("\n"); 
    } 
 
    return 0; 
} 
 
