/**
 * CS1010 AY2010/11 Semester 1 Lab4 Ex3
 * minesweeper.c
 * Print the number of each grid in the mine sweeper game
 * Tan Jiing Jiunn
 * Seaweed
 */

#include <stdio.h>
#define MINE '*'       // a mine-filled square
#define L1_ROWS 8      // number of rows for level-1 grid
#define L1_COLS 8      // number of columns for level-1 grid
#define L2_ROWS 12     // number of rows for level-2 grid
#define L2_COLS 16     // number of columns for level-2 grid
#define L3_ROWS 16     // number of rows for level-3 grid
#define L3_COLS 30     // number of columns for level-3 grid

//prototypes
void scan_mines(char grid[][L3_COLS+1], int rows);
void printGridNumber(char grid[][L3_COLS+1], int numField[][L3_COLS], int rows, int cols);

//instantiation
int main(void)
{
	int level, rows, cols,i ,j;
	char grid[L3_ROWS][L3_COLS+1];
	int numField[L3_ROWS][L3_COLS];
	int rows_limit[3] = {L1_ROWS, L2_ROWS, L3_ROWS};
	int cols_limit[3] = {L1_COLS, L2_COLS, L3_COLS};

    printf("Enter level:");
	scanf("%d", &level);

	rows = rows_limit[level-1];
	cols = cols_limit[level-1];

    printf("Please input mines position, input * for mine and input _ for empty place:\n");
    scan_mines(grid, rows);
	for (i = 0; i < rows ; i++){
        for (j = 0; j < cols ; j++){
            numField[i][j] = 0 ;
        }
    }
	printGridNumber(grid, numField, rows, cols);
	for(i = 0; i < rows; i++){
		for(j = 0; j < cols; j++){
			printf("%d ", numField[i][j]);
		}
		printf("\n");
	}

    return 0;
}

// Read the grid for minefield
void scan_mines(char grid[][L3_COLS+1], int rows)
{
	int r;

	for (r=0; r<rows; r++)
	{
		scanf("%s", grid[r]); // Alternatively: gets(grid[r])
	}
}

//Display all the numbers
void printGridNumber(char grid[][L3_COLS+1], int numField[][L3_COLS], int rows, int cols){
    int i, j, number;
    for (i = 0; i < rows ; i++){
        for (j = 0; j < cols ; j++){
            if(grid[i][j] == '*'){
				numField[i-1][j-1]++;
				numField[i-1][j  ]++;
				numField[i-1][j+1]++;
                numField[i  ][j-1]++;
                numField[i  ][j+1]++;
				numField[i+1][j-1]++;
				numField[i+1][j  ]++;
				numField[i+1][j+1]++;
			}
        }
    }
    for (i = 0; i < rows ; i++){
        for (j = 0; j < cols ; j++){
            if(grid[i][j] == '*'){
                numField[i][j] = 9 ;
			}
        }
    }
}

