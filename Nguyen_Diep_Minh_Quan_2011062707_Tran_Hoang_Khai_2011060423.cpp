#include<stdio.h>

void latin_square(int arr[][100], int limit){				//			T(n)
	for(int row = 0; row < limit; row++)					//				n
      { 
            for(int column = 0; column < limit; column++)			//			n
            {	
                  arr[row][column] = (row + column + limit) % limit + 1;	//		1
		    }
      }														//			T(n) = n * (n * 1)
      														//				 = n^2 
}
int main()
{
      int limit;
      int arr[100][100];
      printf("Nhap gioi han:\t");
      scanf("%d",&limit);
      printf("\nMa tran hoan vi voi %d la:\n", limit);
      latin_square(arr, limit);
      for(int row = 0; row < limit; row++)
      {
            printf("\n");
            for( int column = 0; column < limit; column++)
            {
                  printf("%d ", arr[row][column]);
            }
      }
      return 0;
}
