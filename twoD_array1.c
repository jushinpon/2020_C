#include <stdio.h>
#include <stdlib.h>

int main() {
  int *Arr2D;
 
  int row = 10;// row
  int col = 5;// column
  
  Arr2D = malloc( row * col * sizeof(int) );
  
  for (int i = 0; i < row; ++i) {
    for (int j = 0; j < col; ++j) {
      int index = i * col + j;
      Arr2D[index] = index;
      printf("The element value of row %d and col %d is %d.\n",i,j,Arr2D[index]);
    }
  }  
  free(Arr2D);
  return 0;
}