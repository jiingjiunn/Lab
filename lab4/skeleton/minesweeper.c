/**
 * CS1010 AY2010/11 Semester 1 Lab4 Ex3
 * minesweeper.c 
 * <Type in description of program>
 * <Type your name here>
 * <Type your discussion group here>
 */

#include <stdio.h>
#define MINE '*'       // a mine-filled square
#define L1_ROWS 8      // number of rows for level-1 grid
#define L1_COLS 8      // number of columns for level-1 grid
#define L2_ROWS 12     // number of rows for level-2 grid
#define L2_COLS 16     // number of columns for level-2 grid
#define L3_ROWS 16     // number of rows for level-3 grid
#define L3_COLS 30     // number of columns for level-3 grid

int main(void)
{
	int level, rows, cols;
	int rows_limit[3] = {L1_ROWS, L2_ROWS, L3_ROWS};
	int cols_limit[3] = {L1_COLS, L2_COLS, L3_COLS};

	scanf("%d\n", &level);

	rows = rows_limit[level-1];
	cols = cols_limit[level-1];

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

