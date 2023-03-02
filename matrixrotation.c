#include <stdio.h>

void matrixRotation();

int main() {
  matrixRotation();
  return 0;
}
// Matrix multiplication

void matrixRotation() {
  int a, b;
  scanf("%d%d", &a, &b);

  int mat1[a+b][b+a];
  // int mat2[row][col];
  printf("Input square matrix \n");
  for (int i = 1; i <= a; i++) {
    for (int j = 1; j <= b; j++) {
      scanf("%d", &mat1[j][i]);
    }
  }

for (int i = 1; i <= b; i++) {
    for (int j = a; j >= 1; j--) {
      printf("%d ", mat1[i][j]);
    }
    printf("\n");
  }





  // Input matrix 1
  // printf("Input square matrix \n");
  // for (int i = 0; i < row; i++) {
  //   for (int j = 0; j < col; j++) {
  //     scanf("%d", &mat1[i][j]);
  //   }
  // }
  //     // Matrix 1 output
  //   printf("Output result\n");
  //   for (int i = 0; i < col; i++) {
  //     for (int j = 0; j < row; j++) {
  //       printf("%d ", mat1[i][j]);
  //     }
  //     printf("\n");
  //   }

  //   for (int i = 0; i < col; i++) {
  //     for (int j = 0; j < row; j++) {
  //       printf("%d", mat1[j][i]);
  //     }
  //     printf("\n");
  //   }
  //   printf("\n");

  // Output square matrix
  //   for (int i = 0; i < col; i++) {
  //   for (int j = row-1; j >= 0; j--) {
  //     printf("%d ", mat1[j][i]);
  //   }
  //   printf("\n");
  // }

  // Output not standart matrix
  //  for (int i = 0; i < row; i++) {
  //   for (int j = 0,k = col-1; j < col; j++,k--) {
  //    mat2[j][i]=mat1[k][i];
  //   }
  // }

  // for (int i = 0; i < row; i++) {
  //   for (int j = 0; j < col; j++) {
  //     mat2[j][i] = mat1[j][i];
  //   }
  // }

  // for (int i = 0; i < row; i++) {
  //   for (int j = 0; j < col; j++) {
  //     printf("%d ", mat2[j][i]);
  //   }
  //   printf("\n");
  // }
}