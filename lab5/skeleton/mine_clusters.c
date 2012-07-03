/**
 * CS1010 AY2011/2 Semester 1 Lab5 Ex3
 * mine_clusters.c
 * <Type in description of program>
 * <Type your name here>
 * <Type your discussion group here>
 */

#include <stdio.h>
#include <string.h>
#define MINE '*'   // a mine-filled cell
#define FREE '-'   // a mine-free cell
#define MAX_ROWS 20  // maximum rows of a minefield
#define MAX_COLS 40  // maximum columns of a minefield

void scan_minefield(char [][MAX_COLS+1], int *, int *);

int main(void)
{
	char minefield[MAX_ROWS][MAX_COLS+1];
	int row_size, col_size; // actual size of minefield read


	return 0;
}

// To read in the minefield
void scan_minefield(char mines[][MAX_COLS+1], 
                    int *row_size_p, int *col_size_p)
{
	int r;

	scanf("%d %d", row_size_p, col_size_p);
	getchar(); // to catch the newline
	for (r=0; r<*row_size_p; r++)
		gets(mines[r]);
}

