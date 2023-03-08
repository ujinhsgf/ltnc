#include <iostream>
using namespace std;

int mi_count(int row, int col){
  int i,j;
  int near_minum = 0;

  for (i = -1; i < 2; i++) {
    for (j = -1; j < 2; j++) {
      if (row + i >= 0 && row + i <= maxrow && col + j >= 0 && col + j <= maxcol){
        if (p[row + i][col + j] == MINE)
        	near_minum += 1;
      }
    }
  }

  return near_minum;
}


void gen_mine(){
  int i, j;
  time_t t;
  int r;
  int row, col;
  int iminum = 0;
  srand((unsigned) time(&t));
  while (iminum < minum) {
    r = rand() % ((maxrow + 1) * (maxcol + 1));
    row = (r - 1) / (maxcol + 1);
    col = r - row * (maxrow + 1) - 1;

    int should_add = 1;

    for (i = -1; i < 2; i++) {
	    for (j = -1; j < 2; j++) {
	      if (p[row + i][col + j] != MINE && mi_count(row + i, col + j) > 3) {
	      	should_add = 0;
	      }
	    }
	  }

    if (p[row][col] == EMPTY && should_add == 1) { /* Nếu ô đang xét còn trống, và thỏa các điều kiện ở trên thì thực hiện đặt mìn */
      p[row][col] = MINE;
      iminum += 1;
    };
  }
}
void gen_num(){
  int i,j;
  for (i = 0; i <= maxrow; i++) {
    for (j = 0; j <= maxcol; j++) {
      if (p[i][j] == EMPTY){ // nếu ô đang xét trống
        p[i][j] = mi_count(i, j); // gán giá trị số mìn xung quanh
      }
    }
  }
}
