#include <stdio.h>

int main() {
  int row, col, i, j, nzero, zero = 0, k = 1;
  int arr[100][100];
  int sparse[100][3];

  printf("\nEnter number of rows: ");
  scanf("%d", &row);
  printf("\nEnter number of colums: ");
  scanf("%d", &col);

  printf("\nEnter the elements of the matrix:\n");
  for (i = 0; i < row; i++) {
    for (j = 0; j < col; j++) {
      scanf("%d", &arr[i][j]);
	  if(arr[i][j]==0)
	  zero++;
      
    }
  }
  nzero=(row*col)-zero;
  if(nzero>zero)
  printf("The matrix is not sparse \n");
  else{
  sparse[0][0]=row;
  sparse[0][1]=col;
  sparse[0][2]=nzero;

  for(i=0;i<row;i++)
  {
	  for(j=0;j<col;j++)
	  if(arr[i][j]!=0){
      sparse[k][0]=i;
      sparse[k][1]=j;
      sparse[k][2]=arr[i][j];
      k++;
    }
  }
  printf("The sparse Matrix is : \n");

  for(i=0;i<nzero+1;i++)
  {
    for(j=0;j<3;j++)
    printf("%d ",sparse[i][j]);
    printf("\n");
  }
  }
}
  
  

  



		  


	  



  



