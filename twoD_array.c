#include <stdio.h>
#include <stdlib.h>

int main() {  
 
  int row = 10;// row
  int col = 5;// column
  int Arr2D[row][col];  
  
  for (int i = 0; i < row; ++i) {
    for (int j = 0; j < col; ++j) {
      int index = i * col + j;
      Arr2D[i][j] = index;
      printf("The element value of row %d and col %d is %d.\n",i,j,Arr2D[i][j]);
    }
  }   
  return 0;
}
// try to copy a 2D array by a copy function and read the dimension parameters from the command line
