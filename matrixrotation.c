#include <stdio.h>


void matrixRotation();

int main() {
  matrixRotation();
  return 0;
}
// Matrix multiplication

void matrixRotation() {
    int col,row;
  scanf("%d%d", &col,&row);
  
  int mat1[row][col];

  // Input matrix 1
  printf("Input matrix 1\n");
  for (int i = 0; i < col; i++) {
    for (int j = 0; j < row; j++) {
      scanf("%d", &mat1[i][j]);
    }
  }
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

    for (int i = 0; i < col; i++) {
    for (int j = row-1; j >= 0; j--) {
      printf("%d ", mat1[j][i]);
    }
    printf("\n");
  }
}