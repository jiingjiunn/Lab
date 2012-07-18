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
int clusterCheck(char mines[][MAX_COLS+1], int rsize, int csize );

int main(void)
{
	char minefield[MAX_ROWS][MAX_COLS+1];
	int row_size, col_size; // actual size of minefield read
    scan_minefield(minefield, &row_size, &col_size);
    printf("\nNumber of cluster = %d", clusterCheck(minefield, row_size, col_size));


	return 0;
}

// To read in the minefield
void scan_minefield(char mines[][MAX_COLS+1],
                    int *row_size_p, int *col_size_p)
{
	int r;
    printf("input row & column size:");
	scanf("%d %d", row_size_p, col_size_p);
	getchar(); // to catch the newline
	printf("input mine position:\n");
	for (r=0; r<*row_size_p; r++)
		gets(mines[r]);
}

int clusterCheck(char mines[][MAX_COLS+1], int rsize, int csize){
    int i = 0,j = 0;
    printf("%d %d\n", rsize, csize);
    if(rsize <= 0){
        return 0;
    }else{
        for(i = 0 ; i < csize ; i++){
            if((mines[rsize][i] == '*' &&
                      (mines[rsize+1][i-1] != '*' &&
                       mines[rsize+1][i] != '*' &&
                       mines[rsize+1][i+1] != '*' &&
                       mines[rsize][i+1] != '*' )) ){
                j++;
            }
        }
    return clusterCheck(mines, rsize-1, csize) + j;
    }
/*

     if((*mines[rsize][csize] == '*' && (*mines[rsize+1][csize-1] == '*' || *mines[rsize+1][csize] == '*' || *mines[rsize+1][csize+1] == '*' || *mines[rsize][csize+1] == '*' )) ||
       *mines[0][0] != '*' ){
        printf("%c",*mines [0][0]);
        return clusterCheck(mines, n-1) + 0;
    }else if((*mines[rsize][csize] == '*' && (*mines[rsize+1][csize-1] != '*' &&
                                              *mines[rsize+1][csize] != '*' &&
                                              *mines[rsize+1][csize+1] != '*' &&
                                              *mines[rsize][csize+1] != '*' )) ){
        printf("%c",*mines [0][0]);
        return clusterCheck(mines, n-1) + 1;
    }else{
        return 0;
    }
*/
}
