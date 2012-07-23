/**
 * CS1010 AY2011/2 Semester 1 Lab5 Ex3
 * mine_clusters.c
 * To count the number of clusters in the mine field
 * Tan Jiing Jiunn
 * Seaweed
 */

#include <stdio.h>
#include <string.h>
#define MINE '*'   // a mine-filled cell
#define FREE '-'   // a mine-free cell
#define MAX_ROWS 20  // maximum rows of a minefield
#define MAX_COLS 40  // maximum columns of a minefield

//prototypes
void scan_minefield(char** minefield, int *row_size_p, int *col_size_p);
int clusterCheck(char** minefield, int rsize, int csize );

//instantiation
int main(void)
{
    char** minefield;
    minefield = new char *[MAX_COLS];
    for(int i=0; i<MAX_COLS; i++)
        minefield[i] = new char[MAX_ROWS];
    int row_size, col_size; // actual size of minefield read
    scan_minefield(minefield, &row_size, &col_size);
    printf("\nNumber of cluster = %d", clusterCheck(minefield, row_size, col_size));


    return 0;
}

// To read in the minefield
void scan_minefield(char** minefield,
                    int *row_size_p, int *col_size_p)
{
    int r;
    printf("input row & column size:");
    scanf("%d %d", row_size_p, col_size_p);
    getchar(); // to catch the newline
    printf("input mine position:\n");
    for (r=0; r<*row_size_p; r++)
        gets(minefield[r]);
}

//counts number of clusters in minefield
int clusterCheck(char** minefield, int rsize, int csize){
    int i = 0,j = 0;
    printf("%d %d\n", rsize, csize);
    if(rsize <= 0){
        return 0;
    }else{
        for(i = 0 ; i < csize ; i++){
            if((minefield[rsize][i] == '*' &&               //condition to check if there is mine, there are no mines around it
                      (minefield[rsize+1][i-1] != '*' &&
                       minefield[rsize+1][i] != '*' &&
                       minefield[rsize+1][i+1] != '*' &&
                       minefield[rsize][i+1] != '*' )) ){
                j++;
            }
        }
        return clusterCheck(minefield, rsize-1, csize) + j;  //calls itself to go to the next row, then cumulative sum up cluster numbers
    }
}
