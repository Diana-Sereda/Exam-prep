#include <stdio.h>

void snake();
int main() {
    snake();
  return 0;
}

void snake() {
  int row, col;
  scanf("%d%d", &row, &col);
  int mat[row][col];
  int k = 1;

  for (int i = 0; i < row; i++) {
    if (i % 2 != 0) {
       for (int j = col - 1; j >= 0; j--) {
        mat[i][j] = k;
        k++;
      }
    } else {
      for (int j = 0; j < col; j++) {
        mat[i][j] = k;
        k++;
      }
    }
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
     printf("%d ",mat[i][j]) ;
    }
     printf("\n");
  }
}