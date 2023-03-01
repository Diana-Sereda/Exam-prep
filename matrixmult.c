#include <stdio.h>


void matrixMult();

int main() {
  matrixMult();
  return 0;
}

/
// Matrix multiplication

void matrixMult() {
  int length;
  scanf("%d", &length);
  int row = length;
  int col = length;
  int mat1[row][col], mat2[row][col], map3[row][col];

  // Input matrix 1
  printf("Input matrix 1\n");
  for (int i = 0; i < col; i++) {
    for (int j = 0; j < row; j++) {
      scanf("%d", &mat1[i][j]);
    }
    printf("\n");
  }
  // Input matrix 2
  printf("Input matrix 2\n");
  for (int i = 0; i < col; i++) {
    for (int j = 0; j < row; j++) {
      scanf("%d", &mat2[i][j]);
    }
    printf("\n");
  }

  // Matrix 1 output
  printf("Output matrix 1\n");
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      printf("%d ", mat1[i][j]);
    }
    printf("\n");
  }
  // Matrix 2 output
  printf("Output matrix 2\n");
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      printf("%d ", mat2[i][j]);
    }
    printf("\n");
  }
  // Multiplication process

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      map3[i][j] = 0;
      for (int k = 0; k < col; k++) {
        map3[i][j] += mat1[i][k] * mat2[k][j];
      }
    }
    printf("\n");
  }

   printf("Output matrix 3\n");
   // Matrix 3 output
  printf("Output matrix 2\n");
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      printf("%d ", map3[i][j]);
    }
    printf("\n");
  }
}