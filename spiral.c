#include <stdio.h>
#include <stdlib.h>

void spiral();
int main() {
  spiral();
  return 0;
}

void spiral() {
  int row, col;
  scanf("%d%d", &row, &col);
  int **mat = malloc(sizeof(int *) * row);
  for (int i = 0; i < row; i++) {
     mat[i] = malloc(sizeof(int) * col);
  }
  int minI = 0;
  int minJ = 0;
  int maxI = row;
  int maxJ = col;
  int k = 0;

  while (k <= row * col) {
    for (int i = minI; i < maxI; i++) {
      k++;
      if(k <= row * col)
      mat[i][minJ] = k;
    }
      for (int j = minJ+1; j < maxJ; j++) {
      k++;
      if(k <= row * col)
      mat[maxI-1][j] = k;
    }
     for (int i = maxI-2; i >=minI ; i--) {
      k++;
      if(k <= row * col)
      mat[i][maxJ-1] = k;
    }
     for (int j = maxJ-2; j >minJ; j--) {
      k++;
      if(k <= row * col)
      mat[minI][j] = k;
    }

    minI++;
    minJ++;
    maxI--;
    maxJ--;
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      printf("%3d ", mat[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < row; i++) {
      free(mat[i]);
  }
 
 free(mat);
}